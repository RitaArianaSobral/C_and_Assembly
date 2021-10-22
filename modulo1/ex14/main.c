#include <stdio.h>
#include "frequencies.h"

int main(){

    int n = 11;
    float grades [] = {8.23, 12.25, 16.45, 12.45, 10.05, 6.45, 14.45, 0.0, 12.67, 16.23, 18.75};
    int freq [20];


    frequencies(grades, n, freq);

    for(int i = 0; i<n; i++){
        printf("%.2f\n", freq);
    }

    return 0;
}