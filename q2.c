#include <stdio.h>
#include <stdlib.h>

void subtrai(int a, int b, int c, int result){
    result = a - b - c;
    printf("\nA subtracao dos numeros acima eh: %d", result);
    printf("\n\n");
}

int main(){
    int a, b, c, result;

    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
        printf("\n");
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
        printf("\n");
    printf("Informe o terceiro numero: ");
        scanf("%d", &c);
        
        subtrai(a,b,c,result);
        
    printf("\n\n");

    return 0;
}
