#install.py
#author:n1ved (github.com/n1ved)

import os
import time
def clrscr():
    os.system("clear")

def banner():
    print('''
	
    		               _____                  _
                            / ____|                | |
                      _ __ | |     _ __ _   _ _ __ | |_ ___ _ __
                     | '_ \| |    | '__| | | | '_ \| __/ _ \ '__|
                     | | | | |____| |  | |_| | |_) | ||  __/ |
                     |_| |_|\_____|_|   \__, | .__/ \__\___|_|
                                         __/ | |
                                        |___/|_| v1.1                 
                                                               ''')

def install():
    banner()
    print('''                         Installing .... ''')
    os.system("sudo g++ -Wall -o '/bin/ncrypter' ncrypter.cpp ")
    clrscr()
    print("Installation Complete ! Exiting ....")
    clrscr()

def remove():
    banner()
    print("This Program uninstalls all the componets of nCrypter")
    sure =input("Are You Sure to Continue( y / n ) :" )
    if(sure == 'y' or sure == 'Y'):
        os.system("sudo rm -rf /bin/ncrypter ")
        print("Uninstall Compleated !")
    elif(sure == 'n' or sure == 'N'):
        print("Aborted ... !")
    else:
        print("Invalid Option Try Again ! ")
        remove()
    clrscr()

def run():
    banner()
    print('''               Setting Up...               ''')
    os.system("g++ -Wall -o ncr_tmp_bin  ncrypter.cpp")
    clrscr()
    os.system("./ncr_tmp_bin")
    os.system("rm ncr_tmp_bin")
    
def main():
    banner()      
    print('''                        
                                 1 . Install
                                 2 . Uninstall
                                 3 . Use Without installing
                                 0 . Exit ''')
                                 
    opt=input('''                Option(1/2/3/0) >>> ''')
    clrscr()
    if(opt == '1'):
        install()
    elif(opt == '2'):
        remove()
    elif(opt == '3'):
        run()
    elif(opt == '0'):
        exit()
    else:
        print("Invalid Option try again !")
        main()
    print("\t\t\t\tThank You !")
    print("\t\t\t\t Press ENTER to exit ")
    b=input()
    clrscr()


main()
