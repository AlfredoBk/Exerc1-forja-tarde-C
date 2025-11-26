//Inclui a biblioteca stdio.h, permite o uso de entrada
//e saida de valores como o print
#include<stdio.h>
//Inclui a biblioteca stdlib.h 
//pra funcoes utilitarias como o system
#include<stdlib.h>

//Inicio da funcao, onde o programa começa a ser executado
int main(){

    float num1, num2 = 100.45;
    // int num2 = 220;

    //printar os numero das variaveis
    printf("%f %d", num1, num2);

    //pausa o programa, até q o usuario pressione qualquer tecla
    system("pause");
    //finaliza o programa retornando 0, indicando que deu tudo certo
    return 0;
}