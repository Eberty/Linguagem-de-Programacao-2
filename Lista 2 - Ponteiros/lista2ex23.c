#include<stdio.h>
#include<stdlib.h>
int main(){
    int m, n, **a, i, j, *b, cont=0;
    //dimensoes
    printf("Numero de linhas: ");
    scanf ("%d", &n);
    printf("Numero de colunas: ");
    scanf ("%d", &m);

    //alocando
    a=malloc(n*sizeof(int*));
    b=malloc(n*m*sizeof(int));
    if (a==NULL || b==NULL){
        printf("Erro de Alocação!!!\n");
        return -1;
    }
    for (i=0;i<n;i++){
        a[i]=malloc(m*sizeof(int));
        if (a[i]==NULL){
            printf("Erro de Alocação!!!\n");
            return -1;
        }
    }

    //encher a e completar b
    for(i=0;i<n;i++)
        for (j=0;j<m;j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d",(*(a+i)+j));
            //encher b
            *(b + cont++) = *(*(a + i) + j);
        }

    //apresentar b
    for(i = 0; i < (m * n); i++)
		printf("%d ", *(b + i));
    printf("\n");

    //liberar free(matriz)
    for (i=0;i<n;i++)
        free (a[i]);
    free (a);
    //free b (vetor)
    free (b);

	return 0;
}
