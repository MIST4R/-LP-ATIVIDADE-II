#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

//determinando variaveis
    float n;

//coletando dados
    printf("digite a sua nota: ");
    scanf("%f", &n);

//validando dados
    if (n >= 9)
    {
        printf("excelente");
    }

    if (n >= 7 && n <= 8.9)
    {
        printf("bom");
    }

    if (n >= 5 && n <= 6.9)
    {
        printf("razoável");
    }

    if (n < 5)
    {
        printf("insuficiente");
    }

    return 0;
}
