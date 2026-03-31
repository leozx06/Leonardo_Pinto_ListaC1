#include <stdio.h>
#include <stdlib.h>
int main()
{

    float valor;
    float taxa;

    printf("Informe o valor:\n");
    scanf("%f", &valor);

    printf("Valor com taxa aplicada: %.2f", taxa = valor * 1.23);

    system("pause"); /*Impede do programa fechar antes de mostrar o resultado*/
    return 0;

}