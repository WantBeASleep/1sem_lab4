#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../h/struct.h"
#include "../h/ALLFUNC.h"

void OutputDataToConsole(detail *Data, int DataSize){
    printf("DataSize - %d\n", DataSize);
    for (int idx=0; idx<DataSize; idx++){
        printf("Element num - %d\n", idx+1);
        printf("- id: %s\n", Data[idx].id);
        printf("- name: %s\n", Data[idx].name);
        printf("- counter: %d", Data[idx].counter);
        printf("\n==\n");
    }
    return;
}