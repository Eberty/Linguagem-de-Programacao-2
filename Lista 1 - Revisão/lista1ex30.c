#include <stdio.h>
#include <stdlib.h>

int main (void){
    int m, a[100][100], i, j, k;

    printf ("Apresente um numero inteiro m: ");
    scanf ("%d", &m);

    for (i = 0; i < m; i++){
        for (j = i; j < 2*m-i; j++){
			for (k = i; k < 2*m-i; k++){
				a[j][k] = i+1;
			}
        }
    }
    
    
	for (i = 0; i < 2*m; i++){
        for (j = 0; j < 2*m; j++){
			printf("%d ", a[i][j]);
        }
		printf("\n");
    }

	return(0);
}
