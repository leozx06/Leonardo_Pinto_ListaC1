#include <stdio.h>
#include <stdlib.h>

int main()
{

    float raio;
    float area;

    printf("Informe o raio do terreno:\n");
    scanf("%f", &raio);

    area = (raio * raio) * 3.14159;

    printf("A area do terreno e: %.2f\n", area);

    system("pause");
    return 0;

}