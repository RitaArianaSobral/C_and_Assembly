#include <stdio.h>
#include "where_exists.h"

int main(){

    char str1 [] = "BelaDa";
    char str2 [] = "JoanaBelaDaFavela";

    printf("%p\n", where_exists(str1, str2));

    return 0;       
}