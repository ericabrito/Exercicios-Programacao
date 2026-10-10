#include <stdio.h>
 int main(){
  int numero;

    printf("Digite um numero: \n");
     scanf("%d",&numero);

     if(numero >=5){
        printf("Numero e positivo. \n");

     }else if(numero < 12){
     printf("Numero e negativo. \n");

     }else{
     printf("Numero e zero.\n");
     }

 return 0;
 }
