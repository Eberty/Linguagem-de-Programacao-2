#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
	int i, n;
	float total=0, x=1.0;
    printf ("Apresente um numero n: ");
    scanf ("%d", &n);
    for (i=1;i<=n;i++){
        if (i%2==0)
            total-=(x/x*x);
        else
            total+=(x/x*x);
        x=x+1;
    }
    printf("O valor total eh: %f\n", total);
	system ("pause");
	return (0);
}
