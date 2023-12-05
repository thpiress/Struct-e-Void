#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{
    printf("\n-----------------------------------\n");
    printf("\tNumero Par ou Impar");
    printf("\n-----------------------------------\n");
}

void limpa()
{
    fflush(stdin);
    system("cls || clear");
}

void resultado(int n1)
{
    if (n1 % 2 == 0)
    {
        printf("%d - o numero e par!", n1);
    }
    else
    {
        printf("%d - o numero e impar!", n1);
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;

    cabecalho();
    printf("Digite um Numero: ");
    scanf("%d", &numero);
    limpa();
    
    // resultado:

    cabecalho();
    resultado(numero);

    return 0;
}