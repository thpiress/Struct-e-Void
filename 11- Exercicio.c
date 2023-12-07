#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n----------------------------\n");
    printf("\tCalculadora");
    printf("\n----------------------------\n");
}

int somas(int n1, int n2)
{
    int resultado;
    resultado = n1 + n2;
    return resultado;
}

int subtra(int n1, int n2)
{
    int resultad;
    resultad = n1 - n2;
    return resultad;
}

int multi(int n1, int n2)
{
    int resul;
    resul = n1 * n2;
    return resul;
}

float medi(int n1, int n2)
{
    float result;
    result = (n1 + n2) / 2;
    return result;
}

void limpa()
{
    fflush(stdin);
    system("cls || clear");
}

int main()
{

    int Pnumero;
    int Snumero;
    float media;
    int soma;
    int menos;
    int produto;

    cabecalho();
    printf("Digite o primeiro numero: ");
    scanf("%d", &Pnumero);

    printf("Digite o Segundo numero: ");
    scanf("%d", &Snumero);
    limpa();

    soma = somas(Pnumero, Snumero);
    menos = subtra(Pnumero, Snumero);
    produto = multi(Pnumero, Snumero);
    media = medi(Pnumero, Snumero);

    cabecalho();
    printf("Soma dos dois numeros: %d\n", soma);
    printf("Subtração dos dois numeros: %d\n", menos);
    printf("Produto dos dois numeros: %d\n", produto);
    printf("Media dos dois numeros: %.1f\n", media);

    return 0;
}