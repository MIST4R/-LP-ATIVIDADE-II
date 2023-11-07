#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Definindo VariÃ¡veis
    int i = 1;
    int pares = 0;
    int impares = 0;
    int somapares = 0;
    int somaimpares = 0;
    int mediaPares;
    int mediaImpares;
    int valor;

    // Solicitando dados
    do
    {
        printf("Informe o %d° valor: ", i);
        scanf("%d", &valor);

        if (valor > 0)
        {
            if (valor % 2 == 0)
            {
                pares++;
                somapares += valor;
            }
            else
            {
                impares++;
                somaimpares += valor;
            }

            i++;
        }

    } while (valor > 0);

    mediaPares = somapares / pares;
    mediaImpares = somaimpares / impares;

    printf("Quantidade de números pares: %i \n", pares);
    printf("Quantidade de números impares: %i \n", impares);
    printf("MÃ©dia de números pares: %i \n", mediaPares);
    printf("MÃ©dia de números impares: %i ", mediaImpares);

    return 0;
}