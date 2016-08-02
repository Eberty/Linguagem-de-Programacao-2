#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x,y;
} Ponto;

float dist_pontos (Ponto, Ponto);

int main (){
    Ponto p1, p2;
    float dis;

    printf ("Informe x e y do ponto a:\n");
    scanf ("%f %f", &p1.x, &p1.y);
    printf ("Informe x e y do ponto b:\n");
    scanf ("%f %f", &p2.x, &p2.y);

    dis = dist_pontos(p1, p2);
    printf("A distancia eh: %f\n", dis);

    return 0;
}

float dist_pontos(Ponto p1, Ponto p2){
    return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));
}
