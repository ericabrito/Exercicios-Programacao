#include <stdio.h>

int main() {
    int numeros[6];
    int i;

    printf("Digite 6 numeros inteiros:\n");
    for (i = 0; i < 6; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }


    return 0;
}
