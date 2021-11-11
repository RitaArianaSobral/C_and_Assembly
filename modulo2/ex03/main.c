#include <stdio.h>
#include "asm.h"

int op1=1, op2=3;

int main() {
    
    int banana = sum_v2();

    printf("O resultado é %d", banana);

    return 0;
}