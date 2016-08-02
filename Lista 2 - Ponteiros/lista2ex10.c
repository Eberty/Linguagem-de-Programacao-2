#include <stdio.h>
#include <stdlib.h>
int main(){
    int **ma, **mb, m, n, i, j;
    printf("Informe o numero de linhas: ");
    scanf("%d", &m);
    printf("Informe o numero de colunas: ");
    scanf("%d", &n);
    //alocacao de ma
    ma = malloc(m * sizeof(int*));
    if (ma==NULL){
        printf ("Erro!!! Memoria insuficiente\n");
        return (-1);
    }
    for (i=0;i<m;i++){
        ma[i] = malloc(n*sizeof(int));
        if (ma[i]==NULL){
            printf ("Erro!!! Memoria insuficiente\n");
            return (-1);
        }
    }
    //alocacao de mb
    mb = malloc(m * sizeof(int*));
    if (mb==NULL){
        printf ("Erro!!! Memoria insuficiente\n");
        return (-1);
    }
    for (i=0;i<m;i++){
        mb[i] = malloc(n*sizeof(int));
        if (mb[i]==NULL){
            printf ("Erro!!! Memoria insuficiente\n");
            return (-1);
        }
    }
    //preencher ma
    for (i=0;i<m;i++){
        for (j=0; j<n; j++){
            printf("Apresente a[%d][%d]: ", i,j);
            scanf("%d", &ma[i][j]);
        }
    }
    printf ("\n");
    //preencher mb
    for (i=0;i<m;i++){
        for (j=0; j<n; j++){
            printf("Apresente b[%d][%d]: ", i,j);
            scanf("%d", &mb[i][j]);
        }
    }
    //a-b
    printf("\n");
    printf("A-B\n");
    for (i=0;i<m;i++){
        for (j=0; j<n; j++)
            printf("%3d", (ma[i][j]-mb[i][j]));
        printf("\n");
    }
    //a+b
    printf ("\n");
    printf("A+B\n");
    for (i=0;i<m;i++){
        for (j=0; j<n; j++)
            printf("%3d", (ma[i][j]+mb[i][j]));
        printf("\n");
    }
    //free
    for (i=0;i<m;i++)
        free(ma[i]);
    free(ma);
    for (i=0;i<m;i++)
        free(ma[i]);
    free(ma);
    return (0);
}
