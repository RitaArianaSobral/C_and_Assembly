#include <stdio.h>
#include "power_ref.h"

int main(){

    int x;
    int y;

    scanf("%d\n", &x);
    scanf("%d", &y);
        
    if(y >= 0){
        power_ref(&x, y);
        printf("%d\n", x);
    } else
        printf("%d\n", 0);
    
    return 0;
}