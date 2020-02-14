//cpp/fun/1
/* project name :text encrypter[N-crypter]
 * author		:Nived.R.S
 * date created	:08/01/2020
 * date updated	:14/02/2020
 * version		:0.2.2 alpha
 * */
//-----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int encrypt();
//int decrypt();

int main(){
	int opt;
	cout<<"ncrypter"
		<<endl
		<<"choose an option to countinue \n"
		<<"[1]encrypt a text\n"
		<<"[2]decrypt a text\n"
		<<"[0]EXIT\n"
		<<">>>";
		cin>>opt;
		
		if(opt==1)
			encrypt();
		//else if(opt==2)
			//decrypt();
		else if (opt==0)
			exit(0);
		else
		{
			cout<<"[404]option not found aborting !";
			exit(0);
		}
	}
	
int encrypt(){
	int opt,limit;
	char inp[100],enc[100];
	cout<<"Choose the encryption type\n"
		<<"[1]Simple\n"
		<<"[2]complex\n"
		<<">>>";
	cin>>opt;
	if(opt==1){
		
		cout<<"Enter string to be encryped :";
		cin.getline(inp,100);
		limit=strlen(inp);
		for(int i=0;i<limit;i++)
			{
			switch(inp[i])
					{
					case 'a' :	enc[i]='q';
								cout<<enc[i];
								break;
					case 'b' :	enc[i]='g';
								cout<<enc[i];
								break;
					case 'c' :	enc[i]='d';
								cout<<enc[i];
								break;
					case 'd' :	enc[i]='e';
								cout<<enc[i];
								break;								
					case 'e' :	enc[i]='c';
								cout<<enc[i];
								break;								
					case 'f' :	enc[i]='r';
								cout<<enc[i];
								break;								
					case 'g' :	enc[i]='t';
								cout<<enc[i];
								break;
					case 'h' :	enc[i]='y';
								cout<<enc[i];
								break;
					case 'i' :	enc[i]=',';
								cout<<enc[i];
								break;			
					case 'j' :	enc[i]='u';
								cout<<enc[i];
								break;
					case 'k' :	enc[i]='i';
								cout<<enc[i];
								break;
					case 'l' :	enc[i]='o';
								cout<<enc[i];
								break;
					case 'm' :	enc[i]='j';
								cout<<enc[i];
								break;
					case 'n' :	enc[i]='h';
								cout<<enc[i];
								break;
					case 'o' :	enc[i]='.';
								cout<<enc[i];
								break;
					case 'p' :	enc[i]='/';
								cout<<enc[i];
								break;
					case 'q' :	enc[i]='z';
								cout<<enc[i];
								break;
					case 'r' :	enc[i]='v';
								cout<<enc[i];
								break;
					case 's' :	enc[i]='w';
								cout<<enc[i];
								break;
					case 't' :	enc[i]='b';
								cout<<enc[i];
								break;
					case 'u' :	enc[i]='m';
								cout<<enc[i];
								break;
					case 'v' :	enc[i]='f';
								cout<<enc[i];
								break;
					case 'w' :	enc[i]='x';
								cout<<enc[i];
								break;
					case 'x' :	enc[i]='s';
								cout<<enc[i];
								break;
					case 'y' :	enc[i]='n';
								cout<<enc[i];
								break;
					case 'z' :	enc[i]='a';
								cout<<enc[i];
								break;
					case ' ' :	enc[i]=' ';
								cout<<enc[i];
								break;
					default  :	cout<<" ** ";
					}
			}
		}
	if(opt==2)
		cout<<"This feature is coming soon...";
	return 0;
	}