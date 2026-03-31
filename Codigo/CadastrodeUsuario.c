#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nome[50];    /*Define quantas letras a variavel vai pergar da palavra*/
    int idade;
    char sexo[50];

    printf("Informe seu nome\n");
    scanf(" %[^\n]", &nome); /* Para ler nome completo, com espaço entre nome e sobrenome*/

    printf("Informe sua idade\n");
    scanf("%d", &idade);

    printf("informe seu seu sexo\n");
    scanf(" %s", &sexo);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Sexo: %s\n", sexo);
    
    system("pause"); /*Impede do programa fechar antes de mostrar o resultado*/
    return 0;
}