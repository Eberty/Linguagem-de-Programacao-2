#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x,y;
} Tplano;

int main (){
    Tplano ponto;
    ponto.x=1;
    ponto.y=1;
    while ((ponto.x != 0) || (ponto.y != 0)){
        printf("\nApresente x e y:\n");
        scanf ("%d %d", &ponto.x, &ponto.y);
        if (ponto.x>0)
            if (ponto.y>0)
                printf ("I quadrante\n");
            else
                printf ("IV quadrante\n");
        else
            if (ponto.y>0)
                printf ("II quadrante\n");
            else
                if (ponto.y<0)
                    printf ("III quadrante\n");
    }
    return 0;
}
