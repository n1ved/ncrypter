//cpp/fun/1
/* project name :text encrypter
 * author		:Nived.R.S
 * date created	:08/01/2020
 * date updated	:13/01/2020
 * version		:0.0.1.1 alpha
 * */
//-----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
int main()
{
		cout<<"\v \t \t *************encrypter v-0.0 pre-alpha******************* \n\n";
		char str[30],en[30];
		int i;
//--------------------------------------------------------------------------------------------------------
		
		cout<<"enter the string to be encypted :";
		cin>>str;
		cout<<"\t\t\n ==========================================================\n";
		cout<<"\n\t\t\tenscrypted text is : ";
		
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
								return main();
								break;
							
					default:cout<<"invalid charecter !";
							cout<<"\n \t \t==========================================================\n";
									return main();
									
				}
				
		}
		
		return 0;
}
