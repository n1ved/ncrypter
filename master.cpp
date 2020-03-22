#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
//-----------------function declaration--------------------------
void encrypt();
void decrypt();


//----------------global variable declaration--------------------
char str[30];//string for input and output
int i/*for for loop*/,num=0/*for ASCII converition*/;


int main() {
  int opt;
  cout<<"\t\t\t\t ---------Choose a option--------\n "
      <<"\t\t\t\t\t  [1]Encrypt\n"
      <<"\t\t\t\t\t  [2]Decrypt\n"
      <<"\t\t\t\t\t  [0]Exit\n"
      <<"\t\t\t\t\t     OPTION >>> ";
 cin>>opt;
if (opt==1)
      encrypt();
else if (opt==2)
      decrypt();
else if (opt==0)
      exit(0);
else {
    cout<<"Invalid option please try again !!!";
    main();}
  return 0;
}


void encrypt(){  //encrypt function
    cout<<"Enter text to Encrypt : ";

		for (i=0;i<250;i++)
		{
			str[i]=getchar();
			if (i !=0 && str[i] == '\n')
					break;
		}

	  for(i=0;i<250;i++){
      //-----------------
      if (str[i]=='\0')
          break;
   //-----------------
      num=str[i]; //letter to ASCII
      num=num+1; //converting to next charecter
      str[i]=num;//ASCII to letter
      cout<<str[i];//print new letter
  //-------------------
    }
	main();
}


void decrypt(){//decrypt function same as encrypt
  cout<<"Enter text to Decrypt : ";
	for (i=0;i<250;i++)
	{
		str[i]=getchar();
		if (i !=0 && str[i] == '\n')
				break;
	}
  for(i=0;i<250;i++){

		if (str[i]=='\0')
				break;

    num=str[i];
    num=num-1;
    str[i]=num;
    cout<<str[i];
//-------------------
  }
	main();
}
