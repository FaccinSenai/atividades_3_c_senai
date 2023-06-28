#include <stdio.h>

int main()
{

    int p;
    float n1, n2, media, mediageral;
    char nome[100];

    p = 15; // editar para 15 no final
    mediageral = 0;
    n1 = 0, n2 = 0, media = 0;

    for (int i = 1; i <= p; i++)
    {

        printf("\nola voce e o aluno %d , insira seu nome: ", i);
        scanf("%s", &nome);
        printf("Insira sua nota da prova 1: ");
        scanf("%f", &n1);
        printf("Insira sua nota da prova 2: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2;
        mediageral += media;

        printf("A media do aluno %s esta em: %.2f ", nome, media);
    }

    mediageral = mediageral / p;
    printf("\nA media geral da turma esta em: %.2f", mediageral);

    return 0;
}