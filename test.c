#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int a;
} test;

void testFuc(test *p){
    p = (test *)realloc(p, sizeof(test));
    
}

int main(){
    test *p = NULL;
    testFuc(p);
    return 0;
}

