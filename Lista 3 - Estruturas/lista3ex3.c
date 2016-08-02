#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20], sobrenome[40], sexo, email[40];
    int idade, tel;
} Taluno;

int main (){
    Taluno *aluno, *ptr;
    int n, i;

    //ler n e alocar aluno
    printf ("Apresente o numero de alunos: ");
    scanf ("%d", &n);
    aluno = malloc (n * sizeof (Taluno));
    if (aluno == NULL){
        printf ("Erro de alocacao!!!");
        return -1;
    }

    //lendo dados
    ptr=aluno;
    for (i=0; i<n; i++, ptr++){
        printf ("Digite o nome do aluno: ");
        fflush (stdin);
        fgets (ptr->nome, 20, stdin);
        printf ("Digite sobrenome do aluno: ");
        fflush (stdin);
        fgets (ptr->sobrenome, 40, stdin);
        printf ("Apresente a idade do aluno: ");
        scanf ("%d", &ptr->idade);
        printf ("Apresente o telefone do aluno: ");
        scanf ("%d", &ptr->tel);
        printf ("Sexo do aluno: ");
        fflush (stdin);
        ptr->sexo = getchar ();
        printf ("Apresente o email do aluno: ");
        fflush (stdin);
        fgets (ptr->email, 40, stdin);
    }

    //Apresentado dados:
    ptr=aluno;
    for (i=0; i<n; i++, ptr++)
        printf ("\n\nDados:\nNome: %sSobrenome: %sIdade %d \nTelefone: %d \nSexo: %c \nEmail: %s \n\n",
                ptr->nome, ptr->sobrenome, ptr->idade, ptr->tel, ptr->sexo, ptr->email);
    free(aluno);
    return 0;
}
