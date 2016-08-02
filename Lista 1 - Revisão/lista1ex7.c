#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    char nome[50],sexo,aprovacao,opcao[]="sim\n";
    int i=0,j=0,k=0,l=0,h=0;
    while(opcao!="nao")
    {
        printf("Digite o seu nome completo: ");
        fflush(stdin);
        gets(nome);
        printf("Digite o seu sexo (f/m): ");
        scanf("%c",&sexo);
        switch(sexo)
        {
            case 'f': case 'F':
            i++;
            break;
            case 'm': case 'M':
            j++;
            break;
        }
        printf("Se voce foi aprovado digite 'a' se não digite 'r'\n");
        scanf("%c",&aprovacao);
        switch(aprovacao)
        {
            case 'a': case 'A':
            k++;
            break;
            case 'r': case 'R':
            l++;
            break;
        }
    h++;
    printf("Existem mais alunos para serem cadastrados? ");
    scanf("%s",opcao);
    printf ("\n");
    }
    printf("\nA porcentagem de mulheres e %.2f", (j*1.0/h)*100);
    printf("\n A porcentagem de homens e %.2f", (i*1.0/h)*100);
    printf("\n A porcentagem de reprovados e %.2f", (l*1.0/h)*100);
    printf("\n A porcentagem de aprovados e %.2f", (k*1.0/h)*100);
    return (0);
}
