#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
                return InputByConsole(Counter, DataSize);
                break;
            case 2:
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
