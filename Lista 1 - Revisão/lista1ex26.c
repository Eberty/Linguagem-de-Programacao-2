#include <stdio.h>
#include <stdlib.h>
#define n 100
int main (void)
{
	system ("color 0f");
    int t, i, j;
    float a[n][3]={}, m1=0, m2=0, m3=0;
    printf("Digite o numero de alunos: ");
    scanf("%d",&t);
    printf("\n");
    for (i=0;i<t;i++)
        for (j=0;j<3;j++){
            printf("Apresnte a nota %d do aluno a[%d]: ", j+1,i+1);
            fflush(stdin);
            scanf("&f", &a[i][j]);
            if (j==0)
                m1+=a[i][0];
            else
                if (j==1)
                    m2+=a[i][1];
                else
                    m3+=a[i][3];
        }
    for (i=0;i<t;i++){
            printf("\nA media do aluno %d foi de: %.2f ", i+1, m[i]);
        }
    printf("\n");
    printf("\nMedia da turma na nota 1: %.2f", m1/t);
    printf("\nMedia da turma na nota 2: %.2f", m2/t);
    printf("\nMedia da turma na nota 3: %.2f", m3/t);
    printf("\nMedia final da turma foi de: %.2f", (m1+m2+m3)/t);
	system ("pause");
	return(0);
}
