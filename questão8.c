#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // determinando variaveis
    int n = 0, i;

    // coletando dados
    do
    {

        printf("Digite um número para iniciar a contagem regressiva: \n");
        scanf("%d", &n);

        if (n <= 0)
        {
            printf("Número inválido! Digite novamente: \n");
        }

    } while (n <= 0);

    printf("\nIniciando contagem...\n");
    sleep(3);

    for (i = n; i >= 0; i--)
    {
        printf("%d\n", i);
        sleep(1);
    }

    return 0;
}