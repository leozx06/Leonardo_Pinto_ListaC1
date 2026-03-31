#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1;
    float nota2;
    float nota3;
    float media;

    printf("Informe sua primeira nota:\n");
    scanf("%f", &nota1);

    printf("Informe sua segunda nota:\n");
    scanf("%f", &nota2);

    printf("Informe sua terceira nota:\n");
    scanf("%f", &nota3);

    printf("Sua media final e: %.1f", media = (nota1 + nota2 + nota3) /3.0);

    system("pause"); /*Impede do programa fechar antes de mostrar o resultado*/
    return 0;

}