#include <stdio.h>
#include <stdlib.h>


#include "struct.h"
#include "ALLFUNC.h"


int main(){
    detail *Data = NULL;
    while (1)
    {
        printf("~~MAIN MENU~~\n1) Enter the data\n2)Write the data\n3) Processing the data\n4) Time`s\n5) Exit\n=============\n");
        int choise;
        scanf("%d", &choise);
        printf("\n");
        switch (choise){
            case 1:
                InputDataMenu(Data);
                break;
            case 2:
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