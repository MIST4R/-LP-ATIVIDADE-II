#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // determinando variaveis
    int n1, n2, resultado;
    int operacao;

    // socilicitando dados
    printf("Digite o primeiro número para o calculo: ");
    scanf("%d", &n1);

    printf("Digite o segundo número para o calculo: ");
    scanf("%d", &n2);

    printf("Digite o código da operação desejada \n");
    printf("1- Soma \n");
    printf("2- Subtração \n");
    printf("3- Multiplicasão \n");
    printf("4- Divisão \n");
    scanf("%d", &operacao);
    system("cls || clear");

    // validando dados
    switch (operacao)
    {
    case 1:
        resultado = n1 + n2;
        break;

    case 2:
        resultado = n1 - n2;
        break;

    case 3:
        resultado = n1 * n2;
        break;

    case 4:
        resultado = n1 / n2;
        break;

    default:
        printf("Operação inválida!");
        break;
    }

    // exibindo dados
    printf("1- Soma \n");
    printf("2- Subtração \n");
    printf("3- Multiplicação \n");
    printf("4- Divisão \n");
    printf("Código da operação escolhida: %i \n", operacao);
    printf("Resultado: %i \n", resultado);

    return 0;
}