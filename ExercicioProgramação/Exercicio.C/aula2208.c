#include <stdio.h>

int main(){

    int vetor[15],i,numero;
    printf("Digite 15 valores:\n");

    for (i = 1; i <= 14; i++) {
        scanf("%d\n ", &vetor[i]);
    }
    printf("Informe um valor a buscar\n");
    scanf("%d\n",numero);
        for(i=0;i<=14;i++){
         if(vetor[i]==numero){

            printf("Numero encontrado:posição %d\n",i);
         break;



         }
        }








return 0;
}
