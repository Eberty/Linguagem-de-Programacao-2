#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
	system ("color 0f");
    int n,i;
    float x, vapp, vexac, den=1, num=1;
    printf ("Digite x: ");
    scanf ("%f", &x);
    printf ("Apresente n: ");
    scanf ("%d", &n);
    num*=x;
    vapp=1+x;
    for (i=2;i<=n;i++){
        den*=i;
        num*=x;
        vapp+=(num/den);
    }
    vexac=exp(x);
    printf ("Aproximado: %.2f \nExato: %.2f \nErro: %.2f \n", vapp, vexac, vapp-vexac);
	system ("pause");
	return (0);
}
