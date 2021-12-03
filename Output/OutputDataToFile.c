#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>

#include "../h/ALLFUNC.h"
#include "../h/struct.h"
#include "../h/lib_help.h"

void OutputDataToFile(detail *Data, char *file_name, int DataSize){

    FILE *file, *fileTECH;

    char *fileTECH_name;
    fileTECH_name = addTech(file_name);

    file = fopen(file_name, "a");
    fileTECH = fopen(fileTECH_name, "a");
    
    fprintf(file, "\nProg-->File write\n");
    fprintf(file, "DataSize - %d\n", DataSize);
    for (int idx=0; idx<DataSize; idx++){
        fprintf(file, "Element num - %d\n", idx+1);
        fprintf(file, "- id: %s\n", Data[idx].id);
        fprintf(fileTECH, "%s\n", Data[idx].id);
        fprintf(file, "- name: %s\n", Data[idx].name);
        fprintf(fileTECH, "%s\n", Data[idx].name);
        fprintf(file, "- counter: %d", Data[idx].counter);
        fprintf(fileTECH, "%d\n", Data[idx].counter);
        fprintf(file, "\n==\n");
    }
    fclose(file);
    fclose(fileTECH);

    free(fileTECH_name);

    return;
}
