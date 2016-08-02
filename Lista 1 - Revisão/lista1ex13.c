#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	system ("color 0f");
    float a,b,c,d, r1,r2;
    printf ("Apresente respectivamente os coeficientes 'a', 'b', 'c' da equaçao de segundo grau:\n");
    scanf ("%f %f %f", &a, &b, &c);
    d= (pow(b,2)-(4*a*c));
    if (d<0)
        printf ("Erro!!!\n");
    else{
        r1= (-b + sqrt(d))/2*a;
        r2= (-b - sqrt(d))/2*a;
        printf ("R1= %.2f e R2= %.2f\n", r1, r2);
    }
	system ("pause");
	return (0);
}
