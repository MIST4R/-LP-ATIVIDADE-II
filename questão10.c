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
    printf("Digite o primeiro n�mero para o calculo: ");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero para o calculo: ");
    scanf("%d", &n2);

    printf("Digite o c�digo da opera��o desejada \n");
    printf("1- Soma \n");
    printf("2- Subtra��o \n");
    printf("3- Multiplicas�o \n");
    printf("4- Divis�o \n");
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
        printf("Opera��o inv�lida!");
        break;
    }

    // exibindo dados
    printf("1- Soma \n");
    printf("2- Subtra��o \n");
    printf("3- Multiplica��o \n");
    printf("4- Divis�o \n");
    printf("C�digo da opera��o escolhida: %i \n", operacao);
    printf("Resultado: %i \n", resultado);

    return 0;
}