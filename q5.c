#include <stdio.h>
#include <stdlib.h>
#define TAM 4

struct armazena{
    int x[TAM];
};

//!Retornar a propria struct
struct armazena ler4Numeros(struct armazena valores){
    int i;

    for(i = 0; i < TAM; i++){
        printf("Informe o %d numero a ser armazenado: ", i + 1);
        scanf("%d", &valores.x[i]);
        printf("\n");
    }

    return valores;
}

void imprimir(struct armazena valores){
    int i;

    for(i = 0; i < TAM; i++){
        printf("\nO %d valor armazenado eh: %d", i + 1, valores.x[i]);
        printf("\n");
    }
}

int main(){
    struct armazena valores;
    
    valores = ler4Numeros(valores);
    imprimir(valores);

    return 0;
}
