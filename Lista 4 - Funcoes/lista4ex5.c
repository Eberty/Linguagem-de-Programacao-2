#include <stdio.h>
#include <stdlib.h>

float PotenciaInt (float, int);

int main(){
    float res, base;
    int exp;
    printf ("Apresente a base: ");
    scanf ("%f", &base);
    printf ("Apresente o expoente: ");
    scanf ("%d", &exp);

    res = PotenciaInt(base, exp);
    printf ("%.1f elevado a %d eh igual a %.4f\n", base, exp, res);
    return 0;
}

float PotenciaInt (float base, int exp){
    float s=1;
    int i;
    if (exp<0){
        exp*= -1;
        for (i=1; i<=exp; i++)
            s*=base;
        return (1/s);
    }
    else{
        for (i=1; i<=exp; i++)
            s*=base;
        return s;
    }
}
