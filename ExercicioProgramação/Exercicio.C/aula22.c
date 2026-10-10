#include <stdio.h>

int main(){
    char letras[3];
    int i;
    printf("Digite 3 caracteres\n");
    for(i=0;i<=2;i++){
        scanf(" %c",&letras[i]);
    }
    printf("\nlistagem\n");
    for(i=0;i<=2;i++){
        printf("%d%c\n",i+1,letras[i]);
    }

return 0;
}
