#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[20], email[50];
    int matricula, idade;
    char sexo;
}Taluno;

void le_aluno (FILE *, Taluno *);

int main(){
    int n, i;
    Taluno aluno;
    FILE *arquivo;

    if ((arquivo = fopen("lista6ex3.txt", "w"))== NULL){
        printf("Erro!!!\n");
        exit(1);
    }

    printf ("Apresente o numero de alunos: ");
    scanf ("%d", &n);

    for (i=0; i<n; i++){
        le_aluno(arquivo, &aluno);
    }

    fclose(arquivo);
    return 0;
}

void le_aluno (FILE *arquivo, Taluno *aluno){

    printf("\n\nNome: ");
    scanf("%s", &(aluno->nome));
    fprintf(arquivo, "%s", (aluno->nome));

    printf("Matricula: ");
    scanf("%d", &(aluno->matricula));
    fprintf(arquivo, "%7d", (aluno->matricula));

    printf("Sexo (m/f): ");
    fflush(stdin);
    (aluno->sexo) = getchar();
    fprintf(arquivo, "%7c", (aluno->sexo));

    printf("Idade: ");
    scanf("%d", &(aluno->idade));
    fprintf(arquivo, "%7d \t", (aluno->idade));

    printf("Email: ");
    scanf("%s", &(aluno->email));
    fprintf(arquivo, "%s", (aluno->email));

    fprintf(arquivo, "\n");
}
