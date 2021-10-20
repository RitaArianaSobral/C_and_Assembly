#include <stdio.h>

void upper1(char *str){
    while(*str != '\0'){
        if(*str >= 65 + 32 && *str <= 90 + 32)
            *str -= 32;
        
        str++;
    }
}