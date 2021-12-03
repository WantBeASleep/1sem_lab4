lab4 : MainMenu.o InputDataMenu.o InputDataByConsole.o OutputDataMenu.o OutputDataToConsole.o lib_code.o InputDataByFile.o OutputDataToFile.o addTech.o freestrct.o
	gcc -o lab4 MainMenu.o InputDataMenu.o InputDataByConsole.o OutputDataMenu.o OutputDataToConsole.o lib_code.o InputDataByFile.o OutputDataToFile.o addTech.o freestrct.o -lreadline
	rm Output/OutputDataToConsole.o
	rm *.o
	clear

MainMenu.o : MainMenu.c 
	gcc -c MainMenu.c 

InputDataMenu.o : Input/InputDataMenu.c
	gcc  -c Input/InputDataMenu.c

InputDataByConsole.o : Input/InputDataByConsole.c 
	gcc -c Input/InputDataByConsole.c

InputDataByFile.o : Input/InputDataByFile.c
	gcc -c Input/InputDataByFile.c

OutputDataMenu.o : Output/OutputDataMenu.c
	gcc -c Output/OutputDataMenu.c

OutputDataToConsole.o : Output/OutputDataToConsole.o
	gcc -c Output/OutputDataToConsole.c

OutputDataToFile.o : Output/OutputDataToFile.c
	gcc -c Output/OutputDataToFile.c

lib_code.o : lib_help/lib_code.c
	gcc -c lib_help/lib_code.c

addTech.o : lib_help/addTech.c
	gcc -c lib_help/addTech.c

freestrct.o : lib_help/freestrct.c
	gcc -c lib_help/freestrct.c

clear : 
	rm output1.txt
	rm output1TECH.txt
	rm lab4