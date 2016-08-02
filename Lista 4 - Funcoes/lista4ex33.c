#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x,y,z;
} Tponto;

typedef struct{
    Tponto centro;
    float raio;
} Tesfera;

Tponto leponto(void);
Tesfera leesfera (void);
void verif_ponto_Interior(Tponto, Tesfera);

int main (){
    Tponto p;
    Tesfera e;

    e = leesfera();
    p = leponto();
    verif_ponto_Interior(p,e);

    return 0;
}

Tesfera leesfera (){
    Tesfera e;
    printf ("Apresente o centro (x,y,z) da esfera:\n");
    scanf("%f %f %f", &e.centro.x, &e.centro.y, &e.centro.z);
    printf ("Apresente o raio da esfera: ");
    scanf("%f", &e.raio);
    return e;
}

Tponto leponto(){
    Tponto p;
    printf ("\nApresente um ponto qualquer (x,y,z):\n");
    scanf("%f %f %f", &p.x, &p.y, &p.z);
    return p;
}

void verif_ponto_Interior(Tponto p, Tesfera e){
    if (pow(e.raio,2) >= (pow((e.centro.x - p.x),2)) + (pow((e.centro.y - p.y),2)) + (pow((e.centro.z - p.z),2)))
        printf("\n\nPonto esta contido na esfera!!!\n");
    else
        printf("\n\nPonto externo a esfera!!\n");
}
