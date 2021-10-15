#include <stdio.h>

int calculoComprimento(char []);

int string_to_int(char []);

int main(void){

    printf("Por favor insira a sua String: ");
    char input [10];
    scanf("%s", input);
		
    printf("%d\n", string_to_int(input));

    return 0;

}

int calculoComprimento(char input []){
    int comprimentoString = 0;

    while(input[comprimentoString] != '\0'){
        comprimentoString++;
    }

    return comprimentoString;
}

int string_to_int(char input []){
    int comprimentoString = calculoComprimento(input);
    int numeroFinal = 0;

    for(int i = 0; i < comprimentoString; i++){
        numeroFinal = numeroFinal * 10 + input[i] - '0';
    }

    return numeroFinal;
}		