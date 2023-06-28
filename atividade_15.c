#include<stdio.h>
int main(){
    int np,maior,menor,idade;
    maior = 0;
    menor = 0;
    printf("Digite a quantia de pessoas que voce deseja informar a idade: \n");
    scanf("%d",&np);
    for(int i = 0; i < np; i++){
        printf("Digite sua idade: \n");
        scanf("%d",&idade);
        if(idade<21){
            menor++;
        }
        else if(idade>50){
            maior++;
        }
    }
    printf("Total de pessoas com menos de 21 anos: %d\n", menor);
    printf("Total de pessoas com mais de 50 anos: %d\n", maior);
    return 0;
}