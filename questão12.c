#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    // Definindo Variáveis
    float n = 0;
    float media = 0;
    int quantidadeDeNotas;
    int contador = 1;
    int soma = 0;
    int i;

    // Solicitando dados
    printf("Digite a quantidade de notas que serão escritas: ");
    scanf("%d", &quantidadeDeNotas);

    // validando dados
    for (i = 0; i < quantidadeDeNotas; i++)
    {
        printf("Informe a %i° nota: ", contador);
        scanf("%f", &n);
        soma += n;
        contador++;
    }
    media = soma / quantidadeDeNotas;

    printf("Sua Média é: %.1f", media);
    return 0;
}