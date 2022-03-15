# include <stdio.h>
# include <stdlib.h>

int main (){
    int v,h,i,j;
    printf("Quantidade asteriscos na horizontal: ");
    scanf("%d", &h);
    printf("Quantidade asteriscos na vertical: ");
    scanf("%d", &v);
    for( i=1; i<= h; i=i+1){
            for(j = 1; j<= v; j=j+1){
                    printf("* ");
                    }
                    printf("\n");
                    }
                    return 0;
}
