 #include <stdio.h>
  int main() {
    int vetor[10];
    int i;
    int maior, menor;
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    maior = menor = vetor[0];

        for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];

        if (vetor[i] < menor) {
            menor = vetor[i];
        }
        }
    }
    printf("\nMaior elemento: %d (posicao %d)\n", maior, maior);
    printf("\nMenor elemento: %d (posicao %d)\n", menor, menor);
    return 0;
}

