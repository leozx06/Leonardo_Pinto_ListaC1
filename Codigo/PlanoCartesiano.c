#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, distancia;

    printf("Informe os valores x e y iniciais no plano cartesiano, separados por um espaço\n");
    scanf("%f %f", &x1, &y1);

    printf("Informe os valores finais x e y no plano cartesiano, separados por um espaço\n");
    scanf("%f %f", &x2, &y2);


    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1,2));

    printf("A distancia entre os pontos e: %.2f", distancia);

    system("pause");
    return 0;
}