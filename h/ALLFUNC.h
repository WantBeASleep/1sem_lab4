#ifndef ALLFUNCDESC_H
#define ALLFUNCDESC_H


#include "struct.h"

detail* InputDataMenu(int *);
detail* InputDataByConsole(int, int *);
detail* InputDataByFile(char *, int *);
void OutputDataMenu(detail *, int);
void OutputDataToConsole(detail *, int);


#endif