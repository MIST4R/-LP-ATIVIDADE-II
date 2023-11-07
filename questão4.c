#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");

    int idade;

    printf("qual é a sua idade: ");
    scanf("%d", &idade);
    system("cls||clear");

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
