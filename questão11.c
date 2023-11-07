#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // determinando variaveis
    char codigoEscrito[250];
    char codigoSalvo[250] = "C4F3";

    // coletando e validando dados
    do
    {
        fflush(stdin);
        printf("Código de acesso: \n");
        gets(codigoEscrito);

        system("cls || clear");

        if (strcmp(codigoEscrito, codigoSalvo) == 0)
        {
            printf("Acesso permitido!");
        }
        else
        {
            printf("Código inválido! Digite novamente. \n");
            sleep(3);
            system("cls || clear");
        }

    } while (strcmp(codigoEscrito, codigoSalvo) != 0);

    return 0;
}