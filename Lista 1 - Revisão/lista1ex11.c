#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int num, a1=0, a2=0, s=0, t;
    printf ("Apresente um numero de quatro algarismos: ");
    scanf ("%d", &num);
    if (num>999 && num<10000){
        a1=num/100;
        a2=num%100;
        s=a1+a2;
        t=s*s;
        if (num==t)
            printf ("O numero possui uma propriedade interesante onde %d corresponde a pow(%d + %d,2) \n", num, a1, a2);
        else
            printf ("Numero sem a propriedade interesante\n");
    }
    else
        printf ("Numero invalido\n");
	system ("pause");
	return (0);
}
