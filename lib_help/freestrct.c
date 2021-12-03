#include <stdlib.h>

#include "../h/struct.h"

void freestrct(detail *data, int datasize){
    for (int idx = 0; idx<datasize; idx++){
        free(data[idx].name);
    }
}