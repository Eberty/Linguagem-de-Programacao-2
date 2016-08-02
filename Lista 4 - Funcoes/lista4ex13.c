#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x,y;
} Tplano;

float Distancia (void);

int main (){
    float dis, dismedia=0;
    int i, n;
    printf("Apresente a quantidade n de pares de pontos: ");
    scanf("%d", &n);
    for (i=0; i<n; i++){
        dis = Distancia();
        dismedia+=dis;
        printf("A distancia eh: %f\n", dis);
    }
    printf("\n\nA distancia media de todos os pontos eh: %f\n", dismedia*1.0/n);
    return 0;
}


float Distancia(){
    Tplano a, b;
    float ab;

    printf ("\nInforme x e y do ponto a:\n");
    scanf ("%f %f", &a.x, &a.y);
    printf ("Informe x e y do ponto b:\n");
    scanf ("%f %f", &b.x, &b.y);

    ab = sqrt(pow((a.x - b.x),2) + pow((a.y - b.y),2));
    return ab;
}
