#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void ler3Numeros(int vet[]){
    int i;
    
    for(i = 0; i < TAM; i++){
        printf("Informe o %d valor: ", i + 1);
        scanf("%d", &vet[i]);
        printf("\n");
    }

    for(i = 0; i < TAM; i++){
        printf("\nO %d numero inserido foi: %d", i + 1, vet[i]);
    }
    printf("\n\n");

}


int main(){
    int vet[TAM];

    ler3Numeros(vet);


    return 0;
}
