#include <stdio.h>
#include "check.h"

int main(){
    
    int vec[100];
    populate(vec,100,20);
    for (int i=0;i<100;i++){
        check(*(vec+i),*(vec+i+1),*(vec+i+2);
    }

    return 0;
}