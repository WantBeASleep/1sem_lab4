#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../h/ALLFUNC.h"
#include "../h/struct.h"

detail* strctncpy(detail *oldData, int DataSize, int delta){
    detail *newData = NULL;
    newData = (detail *)malloc(DataSize * sizeof(detail));
    for (int idx=0; idx<(DataSize - delta); idx++){
        newData[idx].name = (char *)malloc(strlen(oldData[idx].name) * sizeof(char));
        strcpy(newData[idx].name, oldData[idx].name);
        newData[idx].counter = oldData[idx].counter;
    }
    return newData;
}