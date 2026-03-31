#include <stdio.h>
#include <stdlib.h>
int main()
{
    float item1;
    float item2;
    float valort;

    printf("Insira o valor do primeiro produto:\n");
    scanf(" %f", &item1);

    printf("Insira o valor do segundo produto:\n");
    scanf(" %f", &item2);

    printf("Valor Total: %.2f", valort = item1 + item2);

    system("pause"); /*Impede do programa fechar antes de mostrar o resultado*/
    return 0;

}