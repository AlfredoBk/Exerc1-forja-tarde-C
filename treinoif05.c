#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("Informe uma idade: ");
    fflush(stdin);
    scanf(" %d", &idade);

    if (idade >= 15 && idade <= 18){
        printf("A idade esta entre 15 e 18 ");   
    }else{
        printf("A idade não esta entre 15 e 18");
    }

    system("pauese");
    return 0;
}