#include <stdio.h>

int main()
{
    int n1 = 0;
    int n2 = 1;
    int nextTerm;

    printf("Os primeiros 20 termos da série de Fibonacci são:\n");

    for (int i = 1; i <= 20; i++)
    {
        printf("%d - ", n1);
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }

    return 0;
}