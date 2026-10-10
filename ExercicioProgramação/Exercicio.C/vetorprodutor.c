#include <stdio.h>

int main(){
    float compra[2],venda[2];
    int i,codigo[2],quantidade[2],cod_2;


    for(i=0;i<2;i++){
        printf("Digite o preco de compra %d:",i+1);
        scanf("%f",&compra[i]);
        printf("Digite o preco de venda %d:\n",i+1);
        scanf("%f",&venda[i]);
        printf("Digite o codigo do produto %d:",i+1);
        scanf("%d",&codigo[i]);
        printf("Digite a quantidade %d:\n",i+1);
        scanf("%d",&quantidade[i]);
    }

    printf("\n Digite o codigo do produto que deseja buscar: ");
    scanf("%d",&cod_2);

    for(i=0; i<2; i++){

        if(codigo[i] == cod_2)
            printf("\ncodigo:%d :quantidade: %d",codigo[i],quantidade[i]);
        else
            printf("\nproduto nao localizado");
    }





return 0;}