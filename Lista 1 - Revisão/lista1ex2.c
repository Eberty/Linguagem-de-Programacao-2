#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    system ("color 0f");
    float nota=0, soma=0, i;
    for (i=0;i<3;i++){
        printf ("\nApresente a nota %.0f: ", i+1);
        scanf ("%f", &nota);
        soma+=nota;
    }
    printf ("Media: %.2f\n", soma/i);
    system ("pause");
    return(0);
}
