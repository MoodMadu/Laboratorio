#include <stdio.h>
#include <stdlib.h>
int main() {
    int vezes, i, aux;
    float total = 0;
    printf("Digite o numero de vezes a ser repetido: ");
    scanf(" %d", &vezes);

    for(i =0; i < vezes; i++){
        printf("Digite um numero: ");
        scanf(" %d", &aux);
        total += aux/vezes;
    }
    printf("O resultado total foi: %f\n", total);
printf("\n");
return 0;
}
