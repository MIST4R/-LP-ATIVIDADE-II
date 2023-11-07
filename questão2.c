#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

//determinando variaveis
    int dia;
    float valor;
    float valorD;
    float valorF;

//coletando dados
    printf("qual dia da semana voçê está: ");
    scanf("%d", &dia);
    system("cls||clear");

    printf("qual é o valor da sua compra: ");
    scanf("%f", &valor);
    system("cls||clear");

//validando dados
    if (valor > 100)
    {
        if (dia >= 2 && dia <= 5)
        {
            valorD = (valor)*10 / 100;
            valorF = valor - valorD;

            printf("valor original: %.2f\n", valor);
            printf("valor descontado: %.2f\n", valorD);
            printf("valor final: %.2f", valorF);
        }
        else
        {
            valorD = (valor)*15 / 100;
            valorF = valor - valorD;

            printf("valor original: %.2f\n", valor);
            printf("valor descontado: %.2f\n", valorD);
            printf("valor final: %.2f", valorF);
        }
    }
    else
    {
        printf("valor final: %.2f", valor);
    }

    return 0;
}
