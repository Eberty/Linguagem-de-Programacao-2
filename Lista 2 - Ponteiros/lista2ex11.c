#include <stdio.h>
#include <stdlib.h>
int main (){
    int **mat, p=1, m1, m2, n=0, i, j, t;
    printf("Qual o tamanho da matriz quadrada? ");
    scanf ("%d", &t);
    //alocando matriz
    mat=malloc(t*sizeof(int*));
    if (mat==NULL){
        printf ("Erro de Alocacao!!!\n");
        return (-1);
    }
    for (i=0;i<t;i++){
        mat[i]=malloc(t*sizeof(int));
        if (mat[i]==NULL){
            printf ("Erro de Alocacao!!!\n");
            return (-1);
        }
    }

    //ler matriz
    for (i=0;i<t;i++)
        for (j=0;j<t;j++){
            printf ("Apresente mat[%d][%d]: ", i,j);
            scanf ("%d", &mat[i][j]);
            p*=mat[i][j];
            if (mat[i][j]<0)
                n++;
            //maiores numeros
            if (i==0 && j==0){
                m1=mat[i][j];
                m2=mat[i][j];
            }
            else
                if (mat[i][j]>m1){
                    m2=m1;
                    m1=mat[i][j];
                }
                else if(mat[i][j]>m2)
                    m2=mat[i][j];
        }
    printf ("\n\nOs maiores elementos da matriz sao: %d e %d", m1, m2);
    printf ("\nA quntidade de elementos negativos: %d", n);
    printf ("\nO produto de todos os elementos eh %d\n\n", p);
    for(i=0;i<t;i++)
        free(mat[i]);
    free(mat);
    system ("pause");
    return (0);
}
