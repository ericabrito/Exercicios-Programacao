#include <stdio.h>
#include <math.h>
#define TAM 10

int main() {
    float numeros[TAM];
    float quadrados[TAM];
    int i;


    printf("Digite %d números reais:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }


    for (i = 0; i < TAM; i++) {
        quadrados[i] = numeros[i] * numeros[i];

    }
    printf("\nVetor original:\n");
    for (i = 0; i < TAM; i++) {
        printf("%.2f ", numeros[i]);
    }

    printf("\n\nVetor com os quadrados:\n");
    for (i = 0; i < TAM; i++) {
        printf("%.2f ", quadrados[i]);
    }

    printf("\n");

    return 0;
}
