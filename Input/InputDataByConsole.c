#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

#include "../h/ALLFUNC.h"
#include "../h/struct.h"


detail* InputByConsole(int Counter, int *DataSize){
    
    detail *localData = NULL;

    for(int idx=0; idx<Counter; idx++){
        (*DataSize)++;
        printf("number data %d\n", *DataSize);
        localData = (detail *)realloc(localData, sizeof(detail));
        char *str = NULL;
        str = readline("Enter name of detail: ");
        localData[idx].name = (char *)malloc(strlen(str) * sizeof(char));
        strcpy(localData[idx].name, str);
        free(str);
        printf("Enter count of detail: ");
        scanf("%d", &(localData[idx].counter));
    }
    printf("localdata[1].name = %s\n", localData[1].name);
    printf("LOCALDATA OVERVIEW:\n");
    OutputDataToConsole(localData, Counter);
    return localData;
}