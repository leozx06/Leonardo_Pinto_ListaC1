#include <stdio.h>
#include <stdlib.h>
int main()
{
    float temp;

    printf("Qual a temperatura?\n");
    scanf("%f", &temp);

    printf("Temperatura: %.1f graus Celsius", temp);  /*%.1f faz aparecer apenas 1 casas decimais*/


    system("pause"); /*Impede do programa fechar antes de mostrar o resultado*/
    return 0;

}