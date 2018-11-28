#include <stdio.h>
#include <stdlib.h>

void lerNum(int vet[3], int tam){
	
	int i;
	
	for(i = 0; i < tam; i++){
		printf("Insira a entrada do usuario %d: ", i + 1);
		scanf("%d", &vet[i]);
	}
	printf("\n");
	
	for(i = 0; i < tam; i++){
		printf("User %d = %d\n", i + 1, vet[i]);
	}
}


int main(){
	int vet[3], tam = 3;
	
	lerNum(vet, tam);
	
	return 0;
}
