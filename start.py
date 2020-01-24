import os
def clearterm():
	os.system("clear")
clearterm()
print("\t\t\t preparing please wait ......")
os.system("g++ -Wall -c 'master.cpp' ")#compile
os.system("g++ -Wall -o 'master' 'master.cpp' ")#build
clearterm()
print("\t\t\tStarting.....")
clearterm()
os.system("./master")#run

