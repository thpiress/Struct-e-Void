#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 6

void cabecalho()
{
    printf("\n----------------------------------------\n");
    printf("\tNumeros Pares ou Impares");
    printf("\n----------------------------------------\n");
}

void limpa()
{
    fflush(stdin);
    system("cls || clear");
}

void ParouImpar(int numero[])
{
    int i, pares = 0;
    int impares = 0;

    for (i = 0; i < TAM; i++)
    {
        if (numero[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
}
int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int numero[TAM];

    for (i = 0; i < TAM; i++)
    {
        cabecalho();
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero[i]);
        limpa();
    }

    cabecalho();
    ParouImpar(numero);
    return 0;
}