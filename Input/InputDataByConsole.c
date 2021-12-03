#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

#include "../h/ALLFUNC.h"
#include "../h/struct.h"


detail* InputDataByConsole(int Counter, int *DataSize){
    
    detail *localData = NULL;
    *DataSize += Counter;
    localData = (detail *)malloc(sizeof(detail) * Counter);
    for(int idx=0; idx<Counter; idx++){
        printf("number data %d\n", idx + 1);
        char hash[8];
        printf("Enter the id - ");
        scanf("%s", hash);
        strcpy(localData[idx].id, hash);
        char *str = NULL;
        str = readline("Enter name of detail: ");
        localData[idx].name = (char *)malloc(strlen(str) * sizeof(char));
        strcpy(localData[idx].name, str);
        free(str);
        printf("Enter count of detail: ");
        scanf("%d", &(localData[idx].counter));
    }
    return localData;
}