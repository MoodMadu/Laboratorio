#include<stdio.h>
#include<math.h>

int main(){
    float aux,lado1,lado2;

    printf("Digite o lado 01: ");
    scanf("%f",&lado1);
    printf("Digite o lado 02: ");
    scanf("%f",&lado2);
    aux=pow(lado1, 2) + pow(lado2, 2);
    aux = sqrt(aux);
    printf("A hipotenusa e: %.2f",aux);

    return 0;
}
