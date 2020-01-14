//cpp/fun/1
/* project name :text encrypter[N-crypter]
 * author		:Nived.R.S
 * date created	:08/01/2020
 * date updated	:14/01/2020
 * version		:0.0.1.1 alpha
 * */
//-----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{		cout<<"\t\t**************************************************************************\n";
		cout<<"\v\t\t\t\t encrypter v-0.0.1.1 alpha \n\n";
		cout<<"\t\t**************************************************************************\n";
		char str[30],en[30];
		int i,opt,exit;
//----------------------------option for encrypt decrypt or exit-----------------------------------
		cout<<"\v\t\t\t\t--------------Select a option----------------\n";
		cout<<"\t\t\t\t\t [1] encrypt\n";
		cout<<"\t\t\t\t\t [2] decrypt\n";
		cout<<"\t\t\t\t\t [0] exit\n";
		cout<<"\n\n\t\t\t\t\t choose an option >>>";
		cin>>opt;
		
//--------------------------------------------------------------------------------------------------------
	if(opt==1){
		cout<<"\n\nenter the string to be encypted :";
		cin>>str;
		cout<<"\t\t\n ==========================================================\n";
		cout<<"\n\t\t\tencrypted text is : ";
		
		for(i=0;i<30;i++)
		{	
			switch(str[i])
				{
					case 'a' :	en[i]='q';
								cout<<en[i];
								break;							
					case 'b' :	en[i]='g';
								cout<<en[i];
								break;							
					case 'c' :	en[i]='d';
								cout<<en[i];
								break;						
					case 'd' :	en[i]='e';
								cout<<en[i];
								break;								
					case 'e' :	en[i]='c';
								cout<<en[i];
								break;								
					case 'f' :	en[i]='r';
								cout<<en[i];
								break;								
					case 'g' :	en[i]='t';
								cout<<en[i];
								break;
					case 'h' :	en[i]='y';
								cout<<en[i];
								break;
					case 'i' :	en[i]=',';
								cout<<en[i];
								break;			
					case 'j' :	en[i]='u';
								cout<<en[i];
								break;
					case 'k' :	en[i]='i';
								cout<<en[i];
								break;
					case 'l' :	en[i]='o';
								cout<<en[i];
								break;
					case 'm' :	en[i]='j';
								cout<<en[i];
								break;
					case 'n' :	en[i]='h';
								cout<<en[i];
								break;
					case 'o' :	en[i]='.';
								cout<<en[i];
								break;
					case 'p' :	en[i]='/';
								cout<<en[i];
								break;
					case 'q' :	en[i]='z';
								cout<<en[i];
								break;
					case 'r' :	en[i]='v';
								cout<<en[i];
								break;
					case 's' :	en[i]='w';
								cout<<en[i];
								break;
					case 't' :	en[i]='b';
								cout<<en[i];
								break;
					case 'u' :	en[i]='m';
								cout<<en[i];
								break;
					case 'v' :	en[i]='f';
								cout<<en[i];
								break;
					case 'w' :	en[i]='x';
								cout<<en[i];
								break;
					case 'x' :	en[i]='s';
								cout<<en[i];
								break;
					case 'y' :	en[i]='n';
								cout<<en[i];
								break;
					case 'z' :	en[i]='a';
								cout<<en[i];
								break;
					case '_' :	en[i]='_';
								cout<<en[i];
								break;
					case '\0':	cout<<" \t \t\n ==========================================================\n";
								cout<<"\n";
								cout<<"Do you want to Quit the Program ? \n";
								cout<<"choose [yes=1 , no=0] :";
								cin>>exit;
								if (exit==1){return 0;}
								else if (exit==0){return main();}
								break;
							
					default:cout<<"invalid charecter !";
							cout<<"\n \t \t==========================================================\n";
									return main();
									
				}
				
		}
	}
	
	else if (opt==2){
		cout<<"enter the string to be decypted :";
		cin>>str;
		cout<<"\t\t\n ==========================================================\n";
		cout<<"\n\t\t\tdecrypted text is : ";
		
		for(i=0;i<30;i++)
		{	
			switch(str[i])
				{
					case 'q' :	en[i]='a';
								cout<<en[i];
								break;							
					case 'g' :	en[i]='b';
								cout<<en[i];
								break;							
					case 'd' :	en[i]='c';
								cout<<en[i];
								break;						
					case 'e' :	en[i]='d';
								cout<<en[i];
								break;								
					case 'c' :	en[i]='e';
								cout<<en[i];
								break;								
					case 'r' :	en[i]='f';
								cout<<en[i];
								break;								
					case 't' :	en[i]='g';
								cout<<en[i];
								break;
					case 'y' :	en[i]='h';
								cout<<en[i];
								break;
					case ',' :	en[i]='i';
								cout<<en[i];
								break;			
					case 'u' :	en[i]='j';
								cout<<en[i];
								break;
					case 'i' :	en[i]='k';
								cout<<en[i];
								break;
					case 'o' :	en[i]='l';
								cout<<en[i];
								break;
					case 'j' :	en[i]='m';
								cout<<en[i];
								break;
					case 'h' :	en[i]='n';
								cout<<en[i];
								break;
					case '.' :	en[i]='o';
								cout<<en[i];
								break;
					case '/' :	en[i]='p';
								cout<<en[i];
								break;
					case 'z' :	en[i]='q';
								cout<<en[i];
								break;
					case 'v' :	en[i]='r';
								cout<<en[i];
								break;
					case 'w' :	en[i]='s';
								cout<<en[i];
								break;
					case 'b' :	en[i]='t';
								cout<<en[i];
								break;
					case 'm' :	en[i]='u';
								cout<<en[i];
								break;
					case 'f' :	en[i]='v';
								cout<<en[i];
								break;
					case 'x' :	en[i]='w';
								cout<<en[i];
								break;
					case 's' :	en[i]='x';
								cout<<en[i];
								break;
					case 'n' :	en[i]='y';
								cout<<en[i];
								break;
					case 'a' :	en[i]='z';
								cout<<en[i];
								break;
					case '_' :	en[i]='_';
								cout<<en[i];
								break;
					case '\0':	cout<<" \t \t\n ==========================================================\n";
								cout<<"\n";
								cout<<"Do you want to Quit the Program ? \n";
								cout<<"choose [yes=1 , no=0] :";
								cin>>exit;
								if (exit==1){return 0;}
								else if (exit==0){return main();}
								break;
							
					default:cout<<"invalid charecter !";
							cout<<"\n \t \t==========================================================\n";
									return main();
									
				}
				
		}
		cout<<"Do you want to Quit the Program ? \n";
		cout<<"choose [yes=1 , no=0] :";
		cin>>exit;
		if (exit==1){return 0;}
		else if (exit==0){return main();}
	}
	else if (opt==0){return 0;}
	else {cout<<"wrong input ......!";
		return main();}
	
		return 0;
}
