#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho()
{ // Voida = Funçao
    printf("\n--------------------\n");
    printf("\tSenai");
    printf("\n--------------------\n");
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[200];
    int idade;

    cabecalho(); // Chamada da Função!

    printf("Digite o nome do usuario: ");
    gets(nome);

    printf("Digite a idade do usuario: ");
    scanf("%d", &idade);
    fflush(stdin);
    system("cls");

    cabecalho();

    printf("Nome do Usuario: %s \n", nome);
    printf("Idade do Usuario: %d \n", idade);

    return 0;
}