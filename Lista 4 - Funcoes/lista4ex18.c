#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define wall 401

typedef struct{
    int x, y;
}Tponto;

void geraDardo (Tponto *);
float calcDistancia (const Tponto *);
void prnDardo (const Tponto *, int);

int main(){
    Tponto dardo;
    int ptsG=0, ptsP=0, i;
    float dist;

    srand(time(NULL));

    for (i=0; i<3; i++){
        geraDardo(&dardo);
        dist = calcDistancia(&dardo);
        if (dist < 10.0)
            ptsG++;
        else if (dist>200.0)
            ptsP++;
        prnDardo(&dardo, i);
        printf("Distancia: %.2f\n", dist);
    }

    if (ptsG>1)
        printf("Premio\n");
    else if (ptsP==3)
        printf("Penalidade\n");

    return 0;
}

void geraDardo(Tponto *p){
    p->x = rand()%wall;
    p->y = rand()%wall;
}

float calcDistancia(const Tponto *p){
    float d;
    d = sqrt (p->x*p->x + p->y*p->y);
    return d;
}

void prnDardo(const Tponto *p, int n){
    printf("Dado %d: (%d, %d)\n", n, p->x, p->y);
}
