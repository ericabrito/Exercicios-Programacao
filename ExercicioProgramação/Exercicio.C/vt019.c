#include <stdio.h>

int main(){


    int idades[15];
    int i,maiores = 0;


    for(i = 0; i < 15; i++) {
        printf("Digite um idade %d: ", i + 1);
        scanf("%d", &idades[i]);


        if(idades[i] >= 18) {
            maiores++;
        }
    }


    printf("\nTotal de pessoas maiores de idade: %d\n",maiores);




return 0;
}
