#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	float a, b,c;
	printf("Insira 3 valores:\n");
	scanf("%f %f %f", &a, &b, &c);
	if  ((a < b + c ) && ( b < a + c ) && ( c < a + b ))
        if ((a==b) && (b==c))
            printf("Triangulo equilatero\n");
        else
            if ((a == b && a!= c ) || (a==c && a!=b ) || (b==c && b!=a ))
                printf ("Triangulo Isoceles\n");
            else
                printf ("Triangulo escaleno\n");
    else
        printf ("Nao é um triângulo\n");
    system ("pause");
	return (0);
}
