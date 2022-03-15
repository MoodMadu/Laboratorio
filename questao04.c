# include <stdio.h>
# include <stdlib.h>

int main ()
{

  int i, primo = 0;

    printf("Numeros primos de 1 a 100:\n ");

   for(i=1; i<100; i++){
        primo++;
   if(primo%2!=0 && primo%3!=0)
    printf("%d ", primo);
    }
}


