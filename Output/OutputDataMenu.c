#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

#include "../h/struct.h"
#include "../h/ALLFUNC.h"

void OutputDataMenu(detail *Data, int DataSize){
    while (1)
    {
        printf("~~OUTPUT MENU~~\n1) Write to console\n2) Write to file\n3) Back\n=============\n");
        int choise;
        scanf("%d", &choise);
        printf("\n");
        switch (choise){
            case 1:
                OutputDataToConsole(Data, DataSize);
                break;
            case 2:
                {
                    char *file_name = NULL;
                    file_name = readline("File name: ");
                    OutputDataToFile(Data, file_name, DataSize);
                    free(file_name);
                    return;
                }
                break;
            case 3:
                return;
                break;
        }
    }
    return;
}