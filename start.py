import os
from time import sleep
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
                                        |___/|_|   loading.....
		ncrypter  Copyright (C) 2019-2020  Nived R S
		This program comes with ABSOLUTELY NO WARRANTY.
		This is free software, and you are welcome to redistribute it
		under certain conditions ''')


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
                                        |___/|_|    v1.0 stable             ''')
os.system("./master")#run
clearterm()
print('''




			               _____                  _
                            / ____|                | |
                      _ __ | |     _ __ _   _ _ __ | |_ ___ _ __
                     | '_ \| |    | '__| | | | '_ \| __/ _ \ '__|
                     | | | | |____| |  | |_| | |_) | ||  __/ |
                     |_| |_|\_____|_|   \__, | .__/ \__\___|_|
                                         __/ | |
                                        |___/|_|   Thank you .....              ''')
sleep(1)
clearterm()
os.system("exit")
