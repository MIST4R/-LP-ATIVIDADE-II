#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // determinando variaveis
    float temperatura;

    // coletando dados
    printf("o jogo basiará o clima atraveis da temperatura da onde voçê está\n");
    printf("qual é a temperatura do seu ambiente em graus celsius: ");
    scanf("%f", &temperatura);
    system("cls||clear");

    // validando informações
    if (temperatura >= 15 && temperatura <= 25)
    {
        printf(" o clima do jogo está nublado");
    }
    else if (temperatura > 25)
    {
        printf(" o clima do jogo está ensolarado");
    }
    else
    {
        printf(" o clima do jogo está chuvoso");
    }
    return 0;
}
