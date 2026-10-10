#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior, menor, soma = 0, pares = 0;
    float media, percentual_pares;

    // Leitura dos 100 elementos
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa maior e menor com o primeiro elemento
    maior = menor = vetor[0];

    // Processamento
    for (i = 0; i < 10; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
        if (vetor[i] < menor)
            menor = vetor[i];
        if (vetor[i] % 2 == 0)
            pares++;
        soma += vetor[i];
    }

    // Cálculos
    media = soma / 10;
    percentual_pares = (pares / 10) * 10;

    // Resultados
    printf("\nResultados:\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Percentual de numeros pares: %.2f%%\n", percentual_pares);
    printf("Media dos elementos: %.2f\n", media);

    return 0;
}


