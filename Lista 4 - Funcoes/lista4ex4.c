#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Hipotenusa (float, float);

int main (){
    float c1, c2, hip;
    printf ("Apresente os catetos do triangulo retangulo:\n");
    scanf ("%f %f", &c1, &c2);

    hip = Hipotenusa (c1, c2);
    printf ("Hipotenusa: %.1f\n", hip);

    return 0;
}

float Hipotenusa(float c1, float c2){
    return sqrt(c1*c1 + c2*c2);
}
