#include<stdio.h>
#include <stdlib.h>


int main(){
    float c;
    float f;

    printf("Celsius ---- Fahrenheit\n");

    for(c = 30; c <= 50; c +=2){
        f = c * 1.8 + 32;
        printf(" %.1f C      %.1f F\n", c, f);

    }
    return 0;

}
