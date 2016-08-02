#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	system ("color 0f");
    int num[10], i, m1=0, m2=0;
    for (i=0;i<10;i++){
        printf("Apresente um numero: ");
        scanf("%d", &num[i]);
    }
    for (i=0;i<10;i++){
        if (num[i]>m1)
            m1=num[i];
    }
    for (i=0;i<10;i++){
        if (num[i]>m2 && num[i]!=m1)
            m2=num[i];
    }
    printf ("\nOs maiores numeros sao: %d e %d\n", m1, m2);
	system ("pause");
	return (0);
}
