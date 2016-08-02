#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int mat;
        char nome[20], sobrenome[40];
        float nota;
    } Taluno;

int main (){
    int n, i;
    float somamedia=0;
    Taluno *aluno, *pior, *melhor, *ptr;

    //ler n e alocar alunos
    printf ("Apresente o numero de alunos: ");
    scanf ("%d", &n);
    aluno = malloc (n * sizeof (Taluno));
    if (aluno == NULL){
        printf ("Erro de alocacao!!!");
        return -1;
    }

    pior=aluno;
    melhor=aluno;
    ptr=aluno;
    //ler dados
    for (i=0; i<n; i++, ptr++){
        printf ("\nMatricula do aluno %d: ", i);
        scanf ("%d", &ptr->mat);
        printf ("Nome do aluno %d: ", i);
        scanf ("%s", &ptr->nome);
        printf ("Sobrenome do aluno %d: ", i);
        fflush (stdin);
        fgets (ptr->sobrenome,40,stdin);
        printf ("Nota do aluno %d: ", i);
        scanf ("%f", &ptr->nota);
        //testes
        somamedia += ptr->nota;
        if ((ptr->nota)>(melhor->nota))
            melhor=ptr;
        else if ((ptr->nota)<(pior->nota))
            pior=ptr;
    }
    printf ("\n\nO Melhor estudante foi %s com nota %.2f\n", melhor->nome, melhor->nota);
    printf ("O Pior estudante foi %s com nota %.2f\n", pior->nome, pior->nota);
    printf ("A media eh: %.2f", somamedia/n);
    free(aluno);
    return 0;
}
