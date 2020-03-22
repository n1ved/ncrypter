import os
os.system("resize -s 24 94 ")
def clearterm():
	os.system("clear")
clearterm()
print('''




			               _____                  _
                            / ____|                | |
                      _ __ | |     _ __ _   _ _ __ | |_ ___ _ __
                     | '_ \| |    | '__| | | | '_ \| __/ _ \ '__|
                     | | | | |____| |  | |_| | |_) | ||  __/ |
                     |_| |_|\_____|_|   \__, | .__/ \__\___|_|
                                         __/ | |
                                        |___/|_|   loading.....              ''')


										
os.system("g++ -Wall -c 'master.cpp' ")#compile
os.system("g++ -Wall -o 'master' 'master.cpp' ")#build
clearterm()
print("\t\t\tStarting.....")
clearterm()
print('''                             _____                  _
                            / ____|                | |
                      _ __ | |     _ __ _   _ _ __ | |_ ___ _ __
                     | '_ \| |    | '__| | | | '_ \| __/ _ \ '__|
                     | | | | |____| |  | |_| | |_) | ||  __/ |
                     |_| |_|\_____|_|   \__, | .__/ \__\___|_|
                                         __/ | |
                                        |___/|_|                 ''')
os.system("./master")#run
