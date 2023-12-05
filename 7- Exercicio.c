#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{
    printf("\n-----------------------------\n");
    printf("\tCalcula Media");
    printf("\n-----------------------------\n");
}

void limpaTela()
{
    fflush(stdin);
    system("cls || clear");
}

float soma(int n1, int n2)
{
    float resultado;
    resultado = (n1 + n2) / 2;
    return resultado;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int pNumero;
    int sNumero;
    float media;

    cabecalho();
    printf("Digite o Primeiro Numero: ");
    scanf("%d", &pNumero);

    printf("Digite o Segundo numero: ");
    scanf("%d", &sNumero);
    limpaTela();

    media = soma(pNumero, sNumero);

    cabecalho();
    printf("Meida dos Numeros: %.1f \n", media);

    return 0;
}