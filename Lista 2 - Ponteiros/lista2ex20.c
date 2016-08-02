#include <stdio.h>
#include <stdlib.h>
int main(){
    int **m, **auxlm, **auxcm, i, j, l, c, a, b, t=0;
    printf("Dimensoes da matriz: \n");
    scanf ("%d %d", &l, &c);
    if(l < 2 || c < 2){
		printf("Dimensoes invalidas!\n");
		exit(-1);
	}

    //alocacao
    m =  malloc (l*(sizeof(int*)));
    if (m==NULL){
        printf ("Erro de Alocacao!!!\n");
        return (-1);
    }
    for (i=0;i<l; i++){
        m[i]= malloc(c*(sizeof(int)));
        if (m[i]==NULL){
            printf ("Erro de Alocacao!!!\n");
            return (-1);
        }
    }
    //ler elementos
    printf("\n--Elementos da matriz--\n");
    for (i=0,auxlm=m; i<l; i++, auxlm++){
        auxcm=*auxlm;
        for (j=0; j<c; j++, auxcm++)
            scanf ("%d", auxcm);
    }

    //apresentar matriz
    printf("\n--Matriz--\n");
    for (i=0,auxlm=m; i<l; i++, auxlm++){
        auxcm=*auxlm;
        for (j=0; j<c; j++, auxcm++)
            printf ("%3d", *auxcm);
        printf("\n");
    }

    //escolher troca
    printf("Colunas a serem trocadas: \n");
    scanf ("%d %d", &a, &b);
    for (i=0, auxlm=m; i<l; i++, auxlm++){
        auxcm=*auxlm;
        for (j=0; j<c; j++, auxcm++)
            if (j+1==a){
                t=*auxcm;
                *auxcm=*(auxcm+(b-a));
                *(auxcm+(b-a))=t;
            }
    }

    //apresentar
    for (i=0, auxlm=m; i<l; i++, auxlm++){
        auxcm=*auxlm;
        for (j=0; j<c; j++, auxcm++)
            printf("%3d", *auxcm);
        printf("\n");
    }
    //liberando
    for (i=0;i<l;i++)
        free(m[i]);
    free(m);
	return (0);
}
