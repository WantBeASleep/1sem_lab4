#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

#include "../h/ALLFUNC.h"
#include "../h/struct.h"


detail* InputDataByFile(char *file_name, int *DataSize){
    
    FILE *file;
    file = fopen(file_name, "r");
    
    int idx = 0;
    char str[100];
    int counter;
    
    detail *localData = NULL;

    while (fscanf(file, "%s\n%d", str, &counter) != EOF) {
        *DataSize++;
        localData = (detail *)realloc(localData, sizeof(detail));
        localData[idx].name = (char *)malloc(strlen(str) * sizeof(char));
        strcpy(localData[idx].name, str);
        localData[idx].counter = counter;
        idx++;
    }

    fclose(file);
    return localData;
}