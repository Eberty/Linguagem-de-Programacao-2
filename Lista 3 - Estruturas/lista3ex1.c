#include <stdio.h>
#include <stdlib.h>

typedef struct{
        char nome[20], sobrenome[40], sexo, email[40];
        int idade, tel;
    } Taluno;

int main (){
    Taluno aluno;

    //lendo dados
    printf ("Digite o nome do aluno: ");
    fflush (stdin);
    fgets (aluno.nome, 20, stdin);
    printf ("Digite sobrenome do aluno: ");
    fflush (stdin);
    fgets (aluno.sobrenome, 40, stdin);
    printf ("Apresente a idade do aluno: ");
    scanf ("%d", &aluno.idade);
    printf ("Apresente o telefone do aluno: ");
    scanf ("%d", &aluno.tel);
    printf ("Sexo do aluno: ");
    fflush (stdin);
    aluno.sexo = getchar ();
    printf ("Apresente o email do aluno: ");
    fflush (stdin);
    fgets (aluno.email, 40, stdin);

    //Apresentado dados:
    printf ("\n\nDados:\nNome: %s Sobrenome: %s Idade %d \nTelefone: %d \nSexo: %c \nEmail: %s \n\n", aluno.nome, aluno.sobrenome, aluno.idade, aluno.tel, aluno.sexo, aluno.email);

    return 0;
}
