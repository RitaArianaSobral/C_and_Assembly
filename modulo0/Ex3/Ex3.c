#include <stdio.h>

void fill_array(int *vec);

int main(){
	
	int tamanho = 30;
	
	int vector[tamanho];
	
	fill_array(vector, tamanho);
	
	int total = 0;
	
	for(int i = 0; i<tamanho; i++){
		total += vector[i];
	}
	
	float media = total/tamanho;
	
	printf("A média dos valores inseridos é %d\n", media); 
	
	return 0;
}

void fill_array(int vector[]){
	
	int index = 0;

	while(index<30){
		printf("Enter a value for the index %d of the array: \n", index);
		int input;
		scanf("%d", &input);
		vector[index] = input;
		index++;
	}
}
