#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    int x,y,z;
} Tponto;

typedef struct{
    Tponto centro;
    float raio;
} Tesfera;

int main (){
    Tponto p;
    Tesfera e;

    printf ("Apresente o centro (x,y,z) da esfera:\n");
    scanf("%d %d %d", &e.centro.x, &e.centro.y, &e.centro.z);
    printf ("Apresente o raio da esfera: ");
    scanf("%f", &e.raio);
    printf ("\nApresente um ponto qualquer (x,y,z):\n");
    scanf("%d %d %d", &p.x, &p.y, &p.z);

    if (pow(e.raio,2) >= (pow((e.centro.x - p.x),2)) + (pow((e.centro.y - p.y),2)) + (pow((e.centro.z - p.z),2)))
        printf("\n\nPonto esta contido na esfera!!!\n");
    else
        printf("\n\nPonto externo a esfera!!\n");

    return 0;
}
