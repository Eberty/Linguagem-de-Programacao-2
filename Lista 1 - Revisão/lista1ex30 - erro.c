#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
    int m, a[100][100], i, j;
    printf ("Apresente um numero inteiro m: ");
    scanf ("%d", &m);
    for (i=0; i<m; i++)
        for (j=0; j<m; j++)
            if (i<j)
                a[i][j] = i+1;
            else
                a[i][j] = j+1;


    for (i=0; i<2*m; i++){
        for (j=0; j<2*m; j++)
            printf("%2d ", a[i][j]);
        printf("\n");
    }

	system ("pause");
	return(0);
}
