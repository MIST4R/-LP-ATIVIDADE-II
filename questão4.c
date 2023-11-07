#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // determinado variaveis
    int idade;

    // coletando dados
    printf("qual é a sua idade: ");
    scanf("%d", &idade);
    system("cls||clear");

    // validando dados
    if (idade >= 18)
    {
        printf("acesso permitido");
    }
    else
    {
        printf("acesso negado");
    }
    return 0;
}
