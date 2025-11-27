#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "portuguese");

    int quad(int x);

    int num, res;

    printf("Digita um numero: ");
    fflush(stdin);
    scanf(" %d", &num);

    printf("O quadrado de %d é: %d . \n", num, res);
    res = quad(num);

    system("pause");
    return 0;
}

int quad(int x){
    int quadrado;

    quadrado = x*x;
    return quadrado;
}