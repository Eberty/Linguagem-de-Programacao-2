#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color f0");
    float a[10]={}, b[10]={}, c[10]={};
    int i;
    for (i=0; i<10; i++){
        printf ("Apresente a[%d]: ", i);
        scanf ("%f", &a[i]);
    }
    for (i=0; i<10; i++){
        printf ("Apresente b[%d]: ", i);
        scanf ("%f", &b[i]);
        c[i]=a[i]*b[i];
    }
    for (i=0; i<10; i++)
        printf ("\nC[%d]: %.1f", i, c[i]);
	return(0);
}
