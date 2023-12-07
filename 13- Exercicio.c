#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
    printf("\n----------------------------\n");
    printf("\tConversor");
    printf("\n----------------------------\n");
}

void limpa()
{
    fflush(stdin);
    system("cls || clear");
}

float emCm(float n1)
{
    float resultado;
    resultado = n1 * 100;
    return resultado;
}

int main()
{

    float metro, cm;

    cabecalho();
    printf("Digite o numero em metros: ");
    scanf("%f", &metro);
    limpa();

    cm = emCm(metro);

    printf("Valor convertido em Cm: %.1fcm\n", cm);
    return 0;
}