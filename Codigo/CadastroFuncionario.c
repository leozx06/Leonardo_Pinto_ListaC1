#include <stdio.h>
#include <stdlib.h>
int main()
{

    char func1[50];
    char sexo[50];

    printf("Informe seu nome:\n");
    scanf("%[^\n]", &func1);

    printf("Qual seu sexo, M ou F?\n");
    scanf("%s", &sexo);

    printf("Funcionario: %s\n" "Sexo: %s\n", func1, sexo);

    system("pause");
    return 0;

}