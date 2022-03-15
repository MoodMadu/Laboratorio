#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int vezes, i, aux;
    int quadrado, cubico;
    int total = 0;
    printf("Digite o numero de vezes a ser repetido: ");
    scanf(" %d", &vezes);

    for(i =0; i < vezes; i++){
        printf("Digite um numero: ");
        scanf(" %d", &aux);

        total += aux;
        quadrado = pow(total,2);
        cubico = pow(total,3);
    }
    printf("O resultado da soma e: %d\n", total);
    printf("O resultado do quadrado da soma e: %d\n", quadrado);
    printf("O resultado do valor cubico da soma e: %d\n", cubico);


    printf("\n");
return 0;
}
