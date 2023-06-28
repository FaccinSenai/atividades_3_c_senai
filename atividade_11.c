#include <stdio.h>

int main()
{
    int n;
    int count;
    count = 0;

    printf("Digite os numeros (0 para encerrar) : \n");

    do
    {
        printf("digite um numero: ");
        scanf("%d", &n);

        if (n >= 100 && n <= 200)
        {
            count++;
        }

    } while (n != 0);

    printf("Foram digitados %d numeros entre 100 e 200.\n", count);

    return 0;
}