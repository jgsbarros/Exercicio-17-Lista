#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Programa Calcula equacao de segundo grau: \n");
    printf("Formato: a*x^2 + b*x + c = 0 \n\n");

    int a, b, c;
    printf("Digite o valor da variavel a na equacao: ");
    scanf("%i", &a);

    printf("Digite o valor da variavel b na equacao: ");
    scanf("%i", &b);

    printf("Digite o valor da variavel c na equacao: ");
    scanf("%i", &c);

    float delta = b*b - 4*a*c;
    if (delta < 0)
    {
        printf("Delta: %f\n", delta);
        printf("Nao ha raizes reais.\n");
    }
    else
    {
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        printf("x1 = %.2f \n", x1);
        printf("x2 = %.2f \n", x2);
    }

    return 0;
}
