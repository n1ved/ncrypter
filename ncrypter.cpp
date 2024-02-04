#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

bool isFileMode = true; // true = file, false = string
string inputfile = "";
string outputfile = "";
string inputString = "";
string outputString = "";
int key = -1;
bool isEncrypt = false;
bool isDecrypt = false;
bool fileout = false;


void printHelp();
bool checkUsageErrors();
bool encrypt(bool isFileMode, string input, int key);
bool decrypt(bool isFileMode, string input, int key);
char hashChar(char c, int key);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printHelp();
        return 1;
    }
    
    for(int i=1; i<=argc; i++){
        if(argv[i] == "--encrypt" || argv[i] == "-e")
            isEncrypt = true;
        else if(argv[i] == "--decrypt" || argv[i] == "-d")
            isDecrypt = true;
        else if(argv[i] == "--mode" || argv[i] == "-m"){
            i++;
            isFileMode = ( argv[i] == "t" ? false : true);
        }
        else if(argv[i] == "--key" || argv[i] == "-k"){
            i++;
            key = argv[i][0] - '0';
        }
        else if(argv[i] == "--output" || argv[i] == "-o"){
            i++;
            fileout = true;
            outputfile = argv[i];
        }
        else{
            if(fileout)
                inputfile = argv[i];
            else
                inputString = argv[i];
        }
    }

    if(checkUsageErrors())
        return 1;
    
    if(isEncrypt){
        isFileMode ? encrypt(true, inputfile, key) : encrypt(false, inputString, key);
    }
    else if(isDecrypt){
        isFileMode ? decrypt(true, inputfile, key) : decrypt(false, inputString, key);
    }
    else{
        cout << "Error: No mode of operation set" << endl;
        return 1;
    }


} 

void printHelp(){
    cout << "ncrypter - a simple file encrypter" << endl;
    cout << "Usage: ncrypter <option(s)> followed by FILENAME or STRING" << endl;
    cout << "Where <option> is one of the following:" << endl;
    cout << "  --encrypt ( -e ) : Encrypt the file" << endl;
    cout << "  --decrypt ( -d ) : Decrypt the file" << endl;
    cout << "  --help ( -h ) : Display this help message" << endl;
    cout << "  --mode ( -m ) : Set mode of operation (File (f) or Text (t) )  " << endl;
    cout << "  --key ( -k ) : Set the key for encryption/decryption" << endl;
    cout << "  --output ( -o ) : Set the output file" << endl;
    cout << "Example: ncrypter -e -m f -k mykey -o output.txt input.txt" << endl;
}

bool checkUsageErrors(){
    if(isEncrypt && isDecrypt){
        cout << "Error: Cannot encrypt and decrypt at the same time" << endl;
        return true;
    }
    if(key == -1){
        cout << "Error: Key not set" << endl;
        return true;
    }
    if(fileout && outputfile == ""){
        cout << "Error: Output file not set" << endl;
        return true;
    }
    if(isFileMode && inputfile == ""){
        cout << "Error: Input file not set" << endl;
        return true;
    }
    if(!isFileMode && inputString == ""){
        cout << "Error: Input string not set" << endl;
        return true;
    }
    return false;
}

bool encrypt(bool isFileMode, string input, int key){
    if(isFileMode){
        ifstream file(input);
        if(file.is_open()){
            string line;
            while(getline(file, line)){
                for(int i=0; i<line.length(); i++){
                    line[i] = hashChar(line[i], key);
                }
                outputString += line + "\n";
                cout << line << endl;
            }
            file.close();
        }
        else{
            cout << "Error: Unable to open file" << endl;
            return false;
        }
    }
    else{
        for(int i=0; i<input.length(); i++){
            input[i] = hashChar(input[i], key);
        }
        outputString = input;
        cout << input << endl;
    }
    return true;
}

char hashChar(char c, int key){
    if(isalpha(c)){
        if(isupper(c)){
            c = (c + key - 65) % 26 + 65;
        }
        else{
            c = (c + key - 97) % 26 + 97;
        }
    }
    else if(isdigit(c)){
        c = (c + key - 48) % 10 + 48;
    }
    return c;
}

bool decrypt(bool isFileMode, string input, int key){
    if(isFileMode){
        ifstream file(input);
        if(file.is_open()){
            string line;
            while(getline(file, line)){
                for(int i=0; i<line.length(); i++){
                    line[i] = hashChar(line[i], -key);
                }
                outputString += line + "\n";
                cout << line << endl;
            }
            file.close();
        }
        else{
            cout << "Error: Unable to open file" << endl;
            return false;
        }
    }
    else{
        for(int i=0; i<input.length(); i++){
            input[i] = hashChar(input[i], -key);
        }
        outputString = input;
        cout << input << endl;
    }
    return true;
}