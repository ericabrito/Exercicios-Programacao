#include <stdio.h>
int main(){
int numero[10],i;
printf("Digite 10 valores:\n");
for(i=0;i<=10;i++){
    scanf("%d",&numero[i]);

}
    printf("\nteste\n");
        for(i=1;i<=10;i++){
    if(numero[i] % 2 ==0){
            printf("%d - %d(par)\n",i,numero[i]);
    }else
        printf("%d - %d(impar)\n",i,numero[i]);
}




return 0;
}
