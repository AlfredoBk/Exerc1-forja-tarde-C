#include <stdio.h>
#include <stdlib.h>

int main()
{

    char cidade[50];
    char estado[50];
    int ano;
    int resposta;

    printf("digite sua cidade: ");
    fgets(cidade, 50, stdin);

    printf("digite seu estado: ");
    fgets(estado, 50, stdin);

    printf("Qual é o seu ano de nascimento?:");
    scanf("%d", &ano);

    resposta = 2025 - ano;

    printf("Você nasceu em %se no estado %se tem %d anos. \n", cidade, estado, resposta);

    system("pause");
    return 0;
}