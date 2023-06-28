#include <stdio.h>

int main()
{
    int exc, bom, reg, idade, p, a, total;
    float mediai, porbom;
    p = 5; exc = 0; bom = 0; reg = 0; idade = 0; mediai = 0;
    total = 0;

    for (int i = 1; i <= p; i++)
    {
        printf("Ola, voce assitiu o filme dory. qual sua avaliacao [1-3] ?\n [1] excelente \n [2] bom \n [3] regular\n");
        scanf("%d", &a);

        printf("Informe sua idade: ");
        scanf("%d", &idade);

        if (a == 1)
        {
            exc++;
            mediai = mediai + idade;
            printf("\nVoce votou excelente, obrigado.");
        }
        else if (a == 2)
        {
            bom++;
            printf("\nVoce votou bom, obrigado.");
        }
        else if (a == 3)
        {
            reg++;
            printf("\nVoce votou regular, obrigado.");
        }
        else
        {
            printf("Votou errado.");
        }
    }

    mediai = mediai / exc;
    printf("\nA media de idade das pessoas que votaram em excelente é de: %.2f", mediai);
    printf("\nA quantiade de pessoas que responderam com regular é de: %d", reg);
    total = exc + bom + reg;
    porbom = ((float)bom / total) * 100;
    printf("\nA porcentagem de pessoas que responderam com bom e de: %.2f ", porbom);

    return 0;
}