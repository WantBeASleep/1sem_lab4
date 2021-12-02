#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

#include "../h/ALLFUNC.h"
#include "../h/struct.h"

detail* InputDataMenu(int *DataSize){
    while (1)
    {
        printf("~~INPUT MENU~~\n1) Enter by console\n2) Enter from file\n3) Random Generate\n4) Back\n=============\n");
        int choise;
        scanf("%d", &choise);
        printf("\n");
        switch (choise){
            case 1:
                printf("Count of new Data - ?\n");
                int Counter;
                scanf("%d", &Counter);
                return InputDataByConsole(Counter, DataSize);
                break;
            case 2:
                {
                    char *file_name = NULL;
                    file_name = readline("File name: ");
                    return InputDataByFile(file_name, DataSize);
                }
                break;
            case 3:
                break;
            case 4:
                return NULL;
                break;
        }
    }
    return NULL;
}
