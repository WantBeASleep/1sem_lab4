#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "struct.h"
#include "ALLFUNC.h"

void InputDataMenu(detail *Data){
    while (1)
    {
        printf("~~INPUT MENU~~\n1) Enter by console\n2) Enter from file\n3) Random Generate\n4) Back\n=============\n");
        int choise;
        scanf("%d", &choise);
        printf("\n");
        switch (choise){
            case 1:
                printf("Count of new Data - ?(Enter -1 for enter non-stop)\n");
                int Counter;
                scanf("%d", &Counter);
                if (Counter <= 0) Counter = -1;
                InputByConsole(Data, Counter);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                return;
                break;
        }
    }
}

void InputByConsole(detail *Data, int Counter){
    int idx = 0;
    while(1){
        Data = (detail *)realloc(Data, sizeof(detail));
        printf("Enter the name: ");
        char str[100];
        scanf("%s", str);
        if (!(*str)) return;
        Data[idx].name = (char *)malloc(strlen(str) * sizeof(char));
        strcpy(Data[idx].name, str);
        printf("Enter count of detail: ");
        scanf("%d", &(Data[idx].counter));
        idx++;
        if ((Counter != -1) && (idx == Counter)) return;
    }
}