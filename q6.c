#include <stdio.h>
#include <stdlib.h>
#define TAM 3


void ler3Letras(char a[], char b[], char c[]){

    printf("Informe primeira letra: ");
        fgets(a, TAM, stdin);
        
    printf("\nInforme segunda letra: ");
        fgets(b, TAM, stdin);
        
    printf("\nInforme terceira letra: ");
        fgets(c, TAM, stdin);
        
    printf("\n\n");
    
    printf("Letra 1: %s\n", a);
    printf("Letra 2: %s\n", b);
    printf("Letra 3: %s\n", c);
    
}


int main(){
    char x[TAM], y[TAM], z[TAM];
    
    ler3Letras(x,y,z);


    return 0;
}
