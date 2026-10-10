#include <stdio.h>

int main(){
    float compra[2],venda[2],lucro;
    int i;
    int lucro_menor10=0,lucro10_20=0,lucro_maior20=0;

    for(i=0;i<=2;i++){
        printf("Digite o preco de compra %d:",i+1);
        scanf("%f",compra[i]);
        printf("Digite o preco de venda %d:\n",i+1);
        scanf("%f",&vendas[i]);

        lucro= ((venda[i]-compra[i])/compra[i])*100;
        if(lucro<10) lucro_menor10++;
                else if (lucro<=20) lucro10_20++;
                        else     lucro_maior20++;

        printf("\nMercadoriaas com lucro <10%%:%d",lucro_menor10);
        printf("\nMercadorias com lucro entre 10 e 20:%d",lucro1o_20);

        printf("\nMercadorias com lucro >20:%d",lucro_maior20);




    }






return 0;}
