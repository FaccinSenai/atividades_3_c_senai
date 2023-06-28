#include <stdio.h>
#include <math.h>

int main()
{
    int idade, p = 20;
    char sexo, nome[100];

    for (int i = 0; i <= p; i++)
    {

        printf("\nOla, voce e a pessoa n %i , insira seu nome: ", p);
        scanf("%s", &nome);

        printf("\nInsira sua idade: ");
        scanf("%d", &idade);

        printf("Insira seu sexo (M/F)");
        scanf(" %c", &sexo);

        if (idade > 21 && sexo == 'M' || idade > 21 && sexo == 'm')
        {
            printf("Seu nome e:  %s e voce esta elegivel. \n", nome);
        }
        else
        {
            printf("Nao elegivel, proximo");
        }
    }
    return 0;
}