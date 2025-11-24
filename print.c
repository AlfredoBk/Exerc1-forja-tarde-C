// incluir a biblioteca stdio.h, permitir o uso de entrada
//e saida de  valores como o print
#include<stdio.h>
//inclui a biblioteca stdio.h 
//pra funcões utillitarias com system
#include<stdlib.h>
//o inicio da função, onde o programa começa a ser executado
int main(){

float num1 = 100.45;

int num2 = 200;

//printar os  numeros das variaveis
printf("%f %d", num1, num2);

//pausa o programa, ate que o usuario presione qualquier tecla 
    system("pause");
 //finaliza o programa retornado 0; indicando que deu tudo certo
    return 0;
}