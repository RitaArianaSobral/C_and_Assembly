#include <stdio.h>
#include "power_ref.h"

int main(){

    int z = 5;
    int* x = &z;
    int y = 2;
        
    power_ref(x, y);

    printf("%d\n", *x);
    return 0;
}