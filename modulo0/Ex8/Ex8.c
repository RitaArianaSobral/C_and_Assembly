#include <stdio.h>

int dotLocation(char []);

int integer_part(char []);

int fractional_part(char []); 

int main(void){

    printf("Por favor insira um número: ");

    char x [10];
    scanf("%s", x);

    printf("\nO número é %d.%d\n", integer_part(x), fractional_part(x));

    return 0;
}

int dotLocation(char x []){
    int numberCharacters = 0;

    while(x[numberCharacters] != '.'){
        numberCharacters++;
    }

    return numberCharacters;
}

int integer_part(char x []){
    int dot = dotLocation(x);

    int numeroFinal = 0;

    for(int i = 0; i<dot; i++)
        numeroFinal = numeroFinal * 10 + x[i] - '0';
    
    return numeroFinal;
}

int fractional_part(char x []){
    int dot = (dotLocation(x) + 1);
    int numeroFinal = 0;
    
    while(x[dot] != '\0'){
        numeroFinal = numeroFinal * 10 + x[dot] - '0';
        dot++;
    }

    return numeroFinal;

}