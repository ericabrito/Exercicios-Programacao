#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], resultado[5];
    int i;

    printf("Digite 5 valores para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    return 0;
}
