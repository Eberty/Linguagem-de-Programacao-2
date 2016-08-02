#include <stdio.h>
#include <stdlib.h>
int main(){
    float num, *pnum;
    printf ("Apresente um número: ");
    scanf ("%f", &num);
    pnum=&num;
    printf ("\nReferencia direta: %f\nReferencia indireta: %f\n", num, *pnum);
    system ("pause");
    return(0);
}
