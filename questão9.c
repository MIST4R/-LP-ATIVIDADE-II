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
    printf("Digite um n�mero para verificar se ele � primo ou n�o: ");
    scanf("%d", &n);

    // validando dados
    if (n <= 1)
    {
        printf("n�o � primo");
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("n�o � primo");
            }
        }
        if (i == n)
        {
            printf("� primo");
        }
    }
    return 0;
}