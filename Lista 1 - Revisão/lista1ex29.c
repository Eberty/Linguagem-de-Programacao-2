#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int m[100][100], i, j, x, y, som=0, prod=1;
	printf("I x J: \n");
	scanf("%d %d", &i, &j);
	
	for (x = 0; x < i; x++){
        for (y = 0; y < j; y++){
			printf("M[%d][%d]: ", x, y);
			scanf("%d", &m[x][y]);
        }
    }

	for (x = 0; x < i; x++){
        for (y = 0; y < j; y++){
			if ((x+y) % 2 == 0)
				som += m[x][y];
			else
				prod *= m[x][y];
        }
    }
    
    printf("O somatório dos elementos cuja soma dos ı́ndices seja par: %d\n", som);
    printf("O produtório dos elementos cuja soma dos ı́ndices seja ı́mpar: %d\n", prod);

	return(0);
}
