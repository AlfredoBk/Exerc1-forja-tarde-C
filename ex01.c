#include<stdio.h>
#include<stdlib.h>

int main(){

    char nome[50];
    int idade;

    printf("Qual seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Ola %sVoce tem %d anos. \n", nome, idade);

    system("pause");
    return 0;
}