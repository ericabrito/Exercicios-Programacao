#include <stdio.h>

int main(){
    float v[8];
    int i;


    printf("Digite 8 numeros reais:\n");
    for (i = 0; i < 8; i++) {
        printf("v %d: ", i + 1);
        scanf("%f", &v[i]);
    }


    printf("\nNumeros maiores que 10:\n");
    for (i = 0; i < 8; i++) {
        if (v[i] > 10) {
            printf("%.2f\n", v[i]);
        }
    }




return 0;
}
