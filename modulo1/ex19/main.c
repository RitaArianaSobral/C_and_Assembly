#include <stdio.h>
#include "find_word.h"

int main(){

    char word [] = "xrt";
    char str [] = "aarrxrt xrt xrt xrt";
    char *endereco=find_word(word,str);
    printf("%p\n",str);
    printf("%c\n",*str);
    printf("%p\n",endereco);
    printf("%c\n",*endereco);
    return 0;
}