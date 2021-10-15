#include <stdio.h>

int calculoComprimento(char []);

int string_to_int(char []);

int main(void){

    printf("Por favor insira as sua String 1: ");
    char input1 [10];
    scanf("%s", input1);

    printf("Por favor insira as sua String 2: ");
    char input2 [10];
    scanf("%s", input2);

    int num1 = string_to_int(input1);
    int num2 = string_to_int(input2);

    printf("\n");
		
    float average = ((num1+num2)/2);

    printf("A média é %.2f\n", average);

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