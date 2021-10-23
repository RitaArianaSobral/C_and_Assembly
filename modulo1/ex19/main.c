#include <stdio.h>
#include "find_word.h"

int main(){

    char word [] = "x";
    char str [] = "rrxXXXX";

    char *endereco=find_word(word,str);
    printf("%p\n",str);
    printf("%c\n",*str);
    printf("%p\n",endereco);
    printf("%c\n",*endereco);
    return 0;
}