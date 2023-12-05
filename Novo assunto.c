#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_aluno
{
    char nome[200];
    int idade;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados_aluno aluno;

    printf("\nSolicitando informações do aluno...\n");
    printf("Nome do aluno: ");
    gets(aluno.nome);

    system("cls");

    printf("Idade do aluno:");
    scanf("%d", &aluno.idade);
    system("cls");
    
    // Exibindo resultado:

    printf("\nExibindo Resultado...\n");
    printf("Nome do launo:\n %s", aluno.nome);
    printf("Idade do aluno:\n %d", aluno.idade);

    return 0;
}