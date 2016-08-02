#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x,y;
} Tplano;

int main (){
    Tplano p[3];
    int i;
    float ab, ac, bc;
    for (i=0; i<3; i++){
        printf ("Informe x e y do ponto %d:\n", i+1);
        scanf ("%f %f", &p[i].x, &p[i].y);
    }
    //distancias
    ab = sqrt(pow((p[0].x - p[1].x),2) + pow((p[0].y - p[1].y),2));
    ac = sqrt(pow((p[0].x - p[2].x),2) + pow((p[0].y - p[2].y),2));
    bc = sqrt(pow((p[1].x - p[2].x),2) + pow((p[1].y - p[2].y),2));


    if ((pow(ab,2) == pow(ac,2) + pow(bc,2)) || (pow(ac,2) == pow(ab,2) + pow(bc,2)) || (pow(bc,2) == pow(ac,2) + pow(ab,2)))
        printf("\nTriangulo retangulo\n");
    else
        printf("\nNao formam um Triangulo retangulo\n");

    return 0;
}
