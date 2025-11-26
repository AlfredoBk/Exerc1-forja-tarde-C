//Inclui a biblioteca stdio.h que permite usar entrada e saida de infos.(printf e scanf)
#include<stdio.h>

//Inclui a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include<stdlib.h>

//declarar a função principal, onde o programa começa sua execução
int main(){
    
    float numero1, numero2, respostaSoma;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    respostaSoma = numero1 + numero2;
    printf("A soma dos numeros é: %.2f \n" ,respostaSoma);

    //pausar o sitema ate que o usuario pressione qualquer tecla
    system("pause");
    //finalizamo programa retornando 0, indicando que tudo ocorreu bem
    return 0;
}
