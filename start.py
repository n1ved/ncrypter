import os
print("\n\n\n\t\t\t please wait your program is loading ......... \n\n\n\n\n")
os.system("g++ -Wall -c 'master.cpp' ")#compile
os.system("g++ -Wall -o 'master' 'master.cpp' ")#build
print("\t\t\t\t\t Starting.....")
os.system("./master")#run
print("\n\n\t\t\tthank you for using the program ")
