#include <stdio.h>
#include "check.h"

int main(){
    
    int size = 100, limit = 20;
    int vec[size];

    populate(vec,size,limit);
    
    for (int i=0;i<size-2;i++){
        if(check(*(vec+i),*(vec+i+1),*(vec+i+2)==1)){
            inc_nsets();
        };
    }

    return 0;
}