#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // determinando variaveis
    int n, i;

    // coletando dados
    printf("Digite um número para verificar se ele é primo ou não: ");
    scanf("%d", &n);

    // validando dados
    if (n <= 1)
    {
        printf("não é primo");
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("não é primo");
            }
        }
        if (i == n)
        {
            printf("é primo");
        }
    }
    return 0;
}