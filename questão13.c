#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis
    int n1;
    int n2;

    // Solicitando informações

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    // validando dados
    if (n1 > n2)
    {
        printf("%d é maior que %d", n1, n2);
    }
    else
        printf("%d é maior que %d", n2, n1);
    return 0;
}