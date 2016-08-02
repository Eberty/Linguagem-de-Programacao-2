#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
    int num, x=1, i=0, novo=0, uni=1;
    printf ("Apresnte um numero inteiro qualquer: ");
    scanf ("%d", &num);
    while (x<num){
        x*=10;
        }
    x/=10;
    while (x!=1){
        i=num/x;
        i*=uni;
        novo+=i;
        num=num%x;
        x/10;
        uni*=10;
    }
    printf ("O novo valor eh: %d", novo);
	system ("pause");
	return (0);
}
