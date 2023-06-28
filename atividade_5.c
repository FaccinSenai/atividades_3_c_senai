#include <stdio.h>
int main()
{
    int n1, n2,p;
    printf("Digite um numero: \n");
    scanf("%d", &n1);
    printf("Digite outro numero: \n");
    scanf("%d",&n2);
    p = n1*n2;
    if(n2>n1){
        printf("%d e maior que %d, e o produto desses dois valores e: %d",n2,n1,p);
    }
    else{
        printf("O produto dos dois valores e: %d",p);
    }
    return 0;
}