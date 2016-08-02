#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
    int n,i,a=10;
    printf ("Numero: ");
    scanf ("%d", &n);
    while (n!=0){
        i=n%a;
        printf ("%d", i);
        n/=a;
    }
	system ("pause");
	return (0);
}
