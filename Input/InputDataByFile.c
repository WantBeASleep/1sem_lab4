#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

#include "../h/ALLFUNC.h"
#include "../h/struct.h"
#include "../h/lib_help.h"


detail* InputDataByFile(char *file_name, int *DataSize){
    
    FILE *file;
    file = fopen(file_name, "r");
    int idx = 0;
    char str[100];
    char hash[8];
    int counter;
    detail *localData = NULL;

    while (fscanf(file, "%s", hash) != EOF) {
        (*DataSize)++;

        detail *tmpDate;
        tmpDate = localData;
        localData = strctncpy(tmpDate, idx+1, 1);
        freestrct(tmpDate, idx);
        free(tmpDate);

        strcpy(localData[idx].id, hash);
        fscanf(file, "%s", str);
        localData[idx].name = (char *)malloc(strlen(str) * sizeof(char));
        strcpy(localData[idx].name, str);
        fscanf(file, "%d", &counter);
        localData[idx].counter = counter;
        idx++;
    }
    fclose(file);
    return localData;
}