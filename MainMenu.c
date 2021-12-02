#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "h/struct.h"
#include "h/ALLFUNC.h"
#include "h/lib_help.h"

int main(){
    detail *Data = NULL;
    int DataSize = 0;
    while (1)
    {
        printf("~~MAIN MENU~~\n1) Enter the data\n2) Write the data\n3) Processing the data\n4) Time`s\n5) Exit\n=============\n");
        int choise;
        scanf("%d", &choise);
        printf("\n");

        //

        switch (choise){
            case 1:
                {
                    detail *newData = NULL;
                    int count = DataSize;
                    newData = InputDataMenu(&DataSize);
                    count = DataSize - count;

                    printf("Test info:\ncount - %d\ndatasize: %d\nnewData - %p\n", count, DataSize, newData);
                    int idx = 0, j = 0;

                    detail *tmpData = NULL;
                    tmpData = Data;
                    Data = strctncpy(tmpData, DataSize, count);
                    free(tmpData);

//                    Data = realloc(Data, sizeof(detail) * count);

                    for (idx = DataSize-count; idx<DataSize; idx++){
                        Data[idx].name = (char *)malloc(strlen(newData[j].name) * sizeof(char));
                        strcpy(Data[idx].name, newData[j].name);
                        Data[idx].counter = newData[j].counter;
                        j++;
                    }
                    free(newData);
                }
                break;
            case 2:
                OutputDataMenu(Data, DataSize);
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                exit(0);
                break;
        }
    }

    return 0;
}