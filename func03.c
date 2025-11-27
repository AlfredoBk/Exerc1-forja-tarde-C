#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int i, n;

    printf("Iforme un numero para tabuada: \n");
    scanf("%d", &n);
    
    printf("\nT A B U A D A");
    printf("\n=============");

    for(i=0; i<=10; i++){
        printf("\n %d X %2d = %3d", n, i, (n * i));

    }
    printf("\n=============\n\n\n");


    system("pause");
    return 0;
}