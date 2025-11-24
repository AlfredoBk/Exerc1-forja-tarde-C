#include<stdio.h>
#include<stdlib.h>

int main(){
int idade;

    printf("qual a sua idade?: ");
    scanf("%d", &idade);
    sprintf("a idade informada foi: %d /n", idade);

    sistem("pause");

    return 0;
}