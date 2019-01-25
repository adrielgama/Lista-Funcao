#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b, int result){

    result = a + b;
    printf("\nA soma dos numeros acima eh: %d", result);

}

int main(){
    int a, b, result;

    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
        printf("\n");
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
        printf("\n");

        soma(a,b,result);

        
    printf("\n\n");

    return 0;
}
