#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{
    printf("\n-----------------------------\n");
    printf("\t-Calculadora-");
    printf("\n-----------------------------\n");
}

void final(int n1)
{
    int i;
    printf("\n-----------------------------\n");
    printf("\t-Resultado-\n\n");
    for (i = 1; i < 11; i++)
    {
        printf("\t%d x %d = %d\n", n1, i, n1 * i);
    }
    printf("\n-----------------------------\n");
}

void limpaTela()
{
    fflush(stdin);
    system("cls || clear");
}
int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    cabecalho();
    printf("Digite um numero para saber a tabuada: ");
    scanf("%d", &numero);
    limpaTela();

    // Resultado:

    final(numero);

    return 0;
}