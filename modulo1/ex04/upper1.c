#include <stdio.h>

void upper1(char *str){
    int index = 0;

    while(str[index] != '\0'){
        char* aux = &str[index];
        char changedValue = (*aux) - 32;
        *aux = changedValue;

        index++;
    }
}