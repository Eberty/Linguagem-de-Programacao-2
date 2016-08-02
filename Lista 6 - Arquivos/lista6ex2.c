#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[255];
    char telefone[13];
}Taluno;

int main(){
    int n, i;
    Taluno aluno;
    FILE *arquivo;

    if ((arquivo = fopen("lista6ex2.txt", "w"))== NULL){
        printf("Erro!!!\n");
        exit(1);
    }

    printf ("Apresente o numero de alunos: ");
    scanf ("%d", &n);

    for (i=0; i<n; i++){
        printf ("Digite o nome do aluno: ");
        fflush (stdin);
        gets (aluno.nome);
        fprintf(arquivo, "%s", aluno.nome);
        printf("Apresente telefone do aluno: ");
        scanf("%s", &aluno.telefone);
        fprintf(arquivo, "%7s\n", aluno.telefone);
    }

    fclose(arquivo);
    return 0;
}
