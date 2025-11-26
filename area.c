#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const float PI = 3.1415;
int main(){
    setlocale(LC_ALL, "portuguese");

    float raio;

    fflush(stdin);
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);
    printf("A area do circulo é = %.3f m. \n", PI * raio * raio);

    system("pauese");

    return 0;
}