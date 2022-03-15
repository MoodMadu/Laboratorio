#include <stdio.h>

int main(){
int numero,aux,soma;

printf("Insira um número inteiro \n");
scanf("%d",&numero);
soma=0;

while (numero>0)
{
aux=numero%10;
numero=(numero-aux)/10;
soma=soma+aux;
}

printf("A soma e: %d\n",soma);

}
