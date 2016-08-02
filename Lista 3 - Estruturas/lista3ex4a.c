#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int mat;
        char nome[20], sobrenome[40];
        float nota;
    } Taluno;

int main (){
    int melhor=0, pior=0, n, i;
    float somamedia=0;
    Taluno *aluno;

    //ler n e alocar alunos
    printf ("Apresente o numero de alunos: ");
    scanf ("%d", &n);
    aluno = malloc (n * sizeof (Taluno));
    if (aluno == NULL){
        printf ("Erro de alocacao!!!");
        return -1;
    }

    //ler dados
    for (i=0; i<n; i++){
        printf ("\nMatricula do aluno %d: ", i);
        scanf ("%d", &aluno[i].mat);
        printf ("Nome do aluno %d: ", i);
        scanf ("%s", &aluno[i].nome);
        printf ("Sobrenome do aluno %d: ", i);
        fflush (stdin);
        fgets (aluno[i].sobrenome,40,stdin);
        printf ("Nota do aluno %d: ", i);
        scanf ("%f", &aluno[i].nota);
        //testes
        somamedia+=aluno[i].nota;
        if (aluno[i].nota>aluno[melhor].nota)
            melhor=i;
        else if (aluno[i].nota<aluno[pior].nota)
            pior=i;
    }
        printf ("\n\nMelhor estudante foi %s com nota %.2f\n", aluno[melhor].nome, aluno[melhor].nota);
        printf ("Pior estudante foi %s com nota %.2f\n", aluno[pior].nome, aluno[pior].nota);
        printf ("A media eh: %.2f", somamedia/n);
        free(aluno);

    return 0;
}
