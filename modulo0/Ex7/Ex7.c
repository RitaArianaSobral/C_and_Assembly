#include <stdio.h>

int count_words(char []);

int stringEnd(char []);

int main(){

    printf("Insira uma frase e o algoritmo indicará quantos espaços tem.\n");
    
    char frase [50];
    scanf("%[^\n]s", frase);



    printf("\nA frase tem %d palavras.\n", count_words(frase));

    return 0;
}

int count_words(char frase []){
    int indiceFim = stringEnd(frase);

    int numEspacos = 0;

    for(int i = 0; i < indiceFim; i++){
        if(frase[i] == ' ' && (frase[i+1] != '\0' && frase[i+1] != ' ')){
            numEspacos++;
        }
    }
    
    return numEspacos+1;
}

int stringEnd(char frase []){
    int tamanhoString = 0;

    while(frase[tamanhoString] != '\0'){
        tamanhoString++;
    }

    return tamanhoString;
}

