#include <stdio.h>
#include <stdlib.h>

#define th 6

int par(int numeros[])
{
    int i;
    int pares = 0;
    for (i = 0; i < th; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
    }
    return pares;
}

int impar(int numeros[])
{
    int i;
    int impares = 0;
    for (i = 0; i < th; i++)
    {
        if (numeros[i] % 2 != 0)
        {
            impares++;
        }
    }
    return impares;
}

void cabecalho()
{
    printf("\n-------------------------------\n");
    printf("\tPares Ou Impares");
    printf("\n-------------------------------\n");
}

void limpa()
{
    fflush(stdin);
    system("cls || clear");
}

int main()
{

    int i;
    int numeros[th];
    int pares;
    int impares;

    cabecalho();
    for (i = 0; i < th; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    limpa();

    pares = par(numeros);
    impares = impar(numeros);

    cabecalho();
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);

    return 0;
}