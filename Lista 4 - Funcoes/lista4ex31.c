#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x,y;
} Ponto;

Ponto leponto(void);
int informaquad (Ponto);

int main (){
    Ponto p;
    int quad;
    p.x=1;
    p.y=1;
    while ((p.x != 0) || (p.y != 0)){
    p = leponto();
        quad = informaquad (p);
        if (quad==5)
            printf("Ponto Sobre os eixos\n");
        else if (quad==1)
            printf ("I quadrante\n");
        else if (quad==4)
            printf ("IV quadrante\n");
        else if (quad==2)
            printf ("II quadrante\n");
        else if (quad==3)
            printf ("III quadrante\n");
    }

    return 0;
}

Ponto leponto(){
    Ponto s;
    printf("\nApresente x e y:\n");
    scanf ("%d %d", &s.x, &s.y);
    return s;
}

int informaquad (Ponto p){

        if ((p.x == 0) || (p.y == 0))
            return 0;
        else
            if (p.x>0)
                if (p.y>0)
                    return 1;
                else
                    return 4;
            else
                if (p.y>0)
                    return 2;
                else
                    return 3;
}
