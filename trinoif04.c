#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");


    int num;
    
    printf("Informe um número para saber se ele é par ou ímpar: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("par");
    }else{
        printf("impar");
    }
    
    

    system("pauese");
    return 0;
}