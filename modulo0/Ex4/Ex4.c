#include <stdio.h>

void fill_array(int *vec, int);

int count(int *vec, int n, int value);

int main(){	
	
	int n = 10; //size
	
	int vector[n];
	
	fill_array(vector, n);
	
	int value = 3;
			
	printf("The number of times the given number appears on the array is: %d\n", count(vector, n, value));
	
	return 0;

}

int count(int vector[], int n, int value){
	int numVezes = 0;
	for(int i = 0; i<n; i++){
		if(vector[i] == value)
			numVezes++;
	}
	return numVezes;
}

void fill_array(int vector[], int tamanho){
	
	int index = 0;

	while(index<tamanho){
		printf("Enter a value for the index %d of the array: \n", index);
		int input;
		scanf("%d", &input);
		vector[index] = input;
		index++;
	}
}

