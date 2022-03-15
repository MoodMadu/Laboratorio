#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, soma = 0;

    for(i = 0; i <= 100; i++){

    if(i%7 == 0){
            printf("Os multiplos de 7 sao: %4d\n", i);
            soma +=i;
    }
}
    printf("\nA soma dos multiplos: %4d\n", soma);
    return 0;
}
