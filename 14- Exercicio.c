#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpa()
{
    fflush(stdin);
    system("cls || clear");
}

float soma(float n1)
{
    float resultado;
    if (n1 < 100)
    {
        resultado = n1 * 1.1;
    }
    else
    {
        resultado = n1 * 1.2;
    }
    return resultado;
}

int main()
{
    setlocale(LC_ALL, "potuguese");

    float preco, resultado;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    limpa();

    resultado = soma(preco);
    printf("Preço inflacionado do produto: R$%.2f\n", resultado);

    return 0;
}