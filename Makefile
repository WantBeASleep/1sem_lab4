lab4 : MainMenu.o InputDataMenu.o InputDataByConsole.o OutputDataMenu.o OutputDataToConsole.o
	gcc -o lab4 MainMenu.o InputDataMenu.o InputDataByConsole.o OutputDataMenu.o OutputDataToConsole.o -lreadline
	rm *.o

MainMenu.o : MainMenu.c 
	gcc -c MainMenu.c 

InputDataMenu.o : Input/InputDataMenu.c
	gcc  -c Input/InputDataMenu.c

InputDataByConsole.o : Input/InputDataByConsole.c 
	gcc -c Input/InputDataByConsole.c

OutputDataMenu.o : Output/OutputDataMenu.c
	gcc -c Output/OutputDataMenu.c

OutputDataToConsole.o : Output/OutputDataToConsole.o
	gcc -c Output/OutputDataToConsole.c

clear : 
	rm lab4 *.o