#include <stdio.h>
#include <stdlib.h>
int main (){
    //declaracao de variaveis
    int lma, cma, lmb, cmb, i, j, k;
    float **a, **b, **resp;
    //dimensoes
    printf("Informe numero de linhas da matriz a: ");
    scanf ("%d", &lma);
    printf("Informe numero de colunas da matriz a: ");
    scanf ("%d", &cma);
    printf("\nInforme numero de linhas da matriz b: ");
    scanf ("%d", &lmb);
    printf("Informe numero de colunas da matriz b: ");
    scanf ("%d", &cmb);

    //verificacqo
    if (cma!=lmb){
         printf("\nA matriz produto só existe se o numero de colunas da matriz 'a' = numero de linas da matriz 'b'\n");
         return -1;
    }

   //alocar a
    a=malloc(lma*sizeof(int*));
    if (a==NULL){
        printf ("Erro de Alocacao!!!\n");
        return (-1);
    }
    for (i=0;i<lma;i++){
        a[i]=malloc(cma*sizeof(int));
        if (a[i]==NULL){
            printf ("Erro de Alocacao!!!\n");
            return (-1);
        }
    }
    //alocar b
    b=malloc(lmb*sizeof(int*));
    if (b==NULL){
        printf ("Erro de Alocacao!!!\n");
        return (-1);
    }
    for (i=0;i<lmb;i++){
        b[i]=malloc(cmb*sizeof(int));
        if (b[i]==NULL){
            printf ("Erro de Alocacao!!!\n");
            return (-1);
        }
    }
    //alocar resp
    resp=malloc(lma*sizeof(int*));
    if (resp==NULL){
        printf ("Erro de Alocacao!!!\n");
        return (-1);
    }
    for (i=0;i<lma;i++){
        resp[i]=malloc(cmb*sizeof(int));
        if (resp[i]==NULL){
            printf ("Erro de Alocacao!!!\n");
            return (-1);
        }
    }

    //ler matriz a e b
    printf ("\n\n");
    for (i=0;i<lma;i++)
        for (j=0;j<cma;j++){
            printf ("Apresente a[%d][%d]: ", i,j);
            scanf ("%f", &a[i][j]);
        }

    printf ("\n\n");
    for (i=0;i<lmb;i++)
        for (j=0;j<cmb;j++){
            printf ("Apresente b[%d][%d]: ", i,j);
            scanf ("%f", &b[i][j]);
        }

    //multiplicar matrizes
    for (i=0; i<lma; i++)
        for (j=0;j<cmb;j++){
            resp[i][j]=0;
            for (k=0; k<cma;k++)
                resp[i][j]+=a[i][k]*b[k][j];
        }

    //impressao
    printf ("\n\n------ Resultados ------\n\n");
    for (i=0; i<lma; i++){
        for (j=0; j<cmb; j++)
            printf ("%7.1f", resp[i][j]);
        printf("\n");
        }

    //free
    for(i=0;i<lma;i++)
        free(a[i]);
    free(a);

    for(i=0;i<lmb;i++)
        free(b[i]);
    free(b);

    for(i=0;i<lma;i++)
        free(resp[i]);
    free(resp);

    return (0);
}
