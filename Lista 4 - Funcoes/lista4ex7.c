#include <stdio.h>
#include <stdlib.h>

void perfeito (int);

int main(){
    int i;
    for (i=1;i<=100;i++)
        perfeito(i);

    return 0;
}

void perfeito (int i){
    int soma=0, cont;
    for (cont=1; cont<i; cont++)
        if (i%cont==0)
            soma+=cont;
    if (soma==i){
        printf("O numero %d e perfeito pois ele eh igual a soma entre: \n" , i);
        for (cont=1; cont<i; cont++)
            if (i%cont==0)
                printf("%d\n", cont);
        printf("\n");
    }
}
