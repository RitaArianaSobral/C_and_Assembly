#include <stdio.h>
#include "find_all_words.h"
#define MAX_OCORRENCIAS 10

int main(){

    char str [] = "O Joao gosta de ir a praia.";

    char word [] = "gosta";

    char addrs [1][MAX_OCORRENCIAS];
    
    find_all_words(str, word, addrs);

    for(int i = 0; i< MAX_OCORRENCIAS; i++)
        printf("%p\n", addrs[0][i]);


    return 0;
}