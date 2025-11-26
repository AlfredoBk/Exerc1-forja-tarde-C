#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, resposta;

    printf("Digite o primiero número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    resposta = num1 * num2;
    printf("O valor da área é: %.2f", resposta);

    system("pause");
    return 0;
}