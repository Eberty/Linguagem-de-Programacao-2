#include <stdio.h>
#include <stdlib.h>
#define l 3
int main (void){
    float *a, *b, m1=0, m2=0;
    int i;
    a = malloc(l*sizeof(float));
    b = malloc(l*sizeof(float));
    if (a==NULL || b==NULL){
        printf ("Erro!!!!\n");
        return(-1);
    }
    for (i=0;i<l;i++){
        printf ("Apresente a nota 1 do aluno %d: ", i);
        scanf ("%f", &a[i]);
        m1+=a[i];
    }
    for (i=0;i<l;i++){
        printf ("Apresente a nota 2 do aluno %d: ", i);
        scanf ("%f", &b[i]);
        m2+=b[i];
    }
    for (i=0;i<l;i++){
        if ((a[i]+b[i])/2 >= 7)
            printf ("Aluno %d aprovado\n", i);
        else
            printf ("Aluno %d reprovado\n", i);
    }
    printf ("Media da turma na prova 1: %.2f\n", m1/l);
    printf ("Media da turma na prova 2: %.2f\n", m2/l);
    free (a);
    free(b);
    system ("pause");
    return(0);
}
