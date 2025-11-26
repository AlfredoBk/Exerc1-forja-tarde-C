#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    char sexo;
    int idade;

    printf("Qual a idade: \n");
    fflush(stdin);
    scanf(" %d", &idade);
    printf("Digite (M) Para masculino e (F) Para femenino: \n");
    fflush(stdin);
    scanf(" %c", &sexo);
    
    if(sexo == "M"){
        if(idade >= 16){
        printf("Pode comprar ingressos pro show . \n");
        }else{
            printf("Não pode comprar ingressos. \n");
        }
    }else{
        if(idade >= 18){
            printf("Pode comprear ingressos. \n");
        }else{
            printf("Não pode comprar ingressos . \n");
        }

    }

    system("pauese");
    return 0;
}