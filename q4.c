#include <stdio.h>
#include <stdlib.h>

void ler3Numeros(int vet[], int tam){
	
	int i;
	
	for(i = 0; i < tam; i++){
		printf("Insira a entrada do usuario %d: ", i + 1);
		scanf("%d", &vet[i]);
	}
	printf("\n");
}


int main(){
	int vet[3], tam = 3;
	
	ler3Numeros(vet, tam);
	
	for(int i = 0; i < tam; i++){
		printf("User %d = %d\n", i + 1, vet[i]);
	}
	
	return 0;
}
