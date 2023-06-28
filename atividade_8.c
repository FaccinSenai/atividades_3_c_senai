#include <stdio.h>

int main()
{

    int p;
    float salario, desconto;
    char nome[100];

    p = 10; // editar para 10 no final

    for (int i = 1; i <= p; i++)
    {
        printf("Ola, digite seu nome: ");
        scanf("%s", &nome);

        printf("Informe seu salario: ");
        scanf("%f", &salario);

        if (salario < 1300)
        {
            printf("********Salario**********Desconto**\n");
            printf("***********************************\n");
            printf("Seu salario e de %0.2f ***Isento.**\n \n", salario);
            printf("***********************************\n");
        }
        else if (salario > 1300 && salario < 2300)
        {
            printf("********Salario**********Desconto**\n");
            printf("***********************************\n");
            printf("Seu salario e de %0.2f *****10%****\n \n", salario);
            printf("***********************************\n");
            salario = salario - (salario * 0.10);
            printf("****Seu salario final: %.2f ***\n", salario);
        }
        else if (salario > 2300)
        {
            printf("********Salario**********Desconto**\n");
            printf("***********************************\n");
            printf("Seu salario e de %0.2f *****20%****\n \n", salario);
            printf("***********************************\n");
            salario = salario - (salario * 0.20);
            printf("****Seu salario final: %.2f ***\n", salario);
        }
        else
        {
            printf("Salario impossivel.");
        }
    }

    return 0;
}