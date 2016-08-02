#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int mat;
        char nome[20], sobrenome[40];
        float nota;
    } Taluno;

void alocar (Taluno *, int);
void leraluno (Taluno *);

int main (){
    int n, i;
    float somamedia=0;
    Taluno *aluno, *pior, *melhor, *ptr;

    printf ("Apresente o numero de alunos: ");
    scanf ("%d", &n);

    alocar(aluno, n);

    pior=aluno;
    melhor=aluno;
    ptr=aluno;

    //ler dados
    for (i=0; i<n; i++, ptr++){
        leraluno(&aluno[i]);

        if ((ptr->nota)>(melhor->nota))
            melhor=ptr;
        else if ((ptr->nota)<(pior->nota))
            pior=ptr;
    }

    printf ("\n\nO Melhor estudante foi %s com nota %.2f\n", melhor->nome, melhor->nota);
    printf ("O Pior estudante foi %s com nota %.2f\n", pior->nome, pior->nota);
    free(aluno);
    return 0;
}

void alocar(Taluno *aluno, int n){
    aluno = malloc (n * sizeof (Taluno));
    if (aluno == NULL){
        printf ("Erro de alocacao!!!");
        exit (-1);
    }
}

void leraluno(Taluno *ptr){
    printf ("\nMatricula do aluno: ");
    scanf ("%d", &ptr->mat);
    printf ("Nome do aluno: ");
    scanf ("%s", &ptr->nome);
    printf ("Sobrenome do aluno: ");
    fflush (stdin);
    fgets (ptr->sobrenome,40,stdin);
    printf ("Nota do aluno: ");
    scanf ("%f", &ptr->nota);
}
