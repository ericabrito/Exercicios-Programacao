#include <stdio.h>

int main() {
    int nuV[10];
    int i;


    printf("Digite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &nuV[i]);
    }


    printf("\nNumeros positivos digitados:\n");
    for(i = 0; i < 10; i++) {
        if(nuV[i] > 0) {
            printf("%d ", nuV[i]);
        }
    }

    printf("\n");
    return 0;
}
