#include <stdio.h>

int main(){

 int v[10];
    int i;


    for(i = 0; i < 10; i++) {
        printf("Digite o numero inteiro %d :", i+1);
        scanf("%d", &v[i]);
    }


    printf("\nNumeros pares digitados:\n");
    for(i=0; i<10; i++){
        if(v[i] % 2 == 0) {
            printf("%d\n", v[i]);
        }
    }



return 0;
}
