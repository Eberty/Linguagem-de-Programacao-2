#include<stdio.h>
#include<stdlib.h>
main()
{
    float salario,contribuicao;
    printf("Qual e o valor do seu salario ?\n");
    scanf("%f",&salario);
    if(salario<=1800)
    {
        contribuicao=salario *0.08;
        printf("\nA sua contribuicao sera de  %.2f",contribuicao);
        salario-=contribuicao;
        printf("\n O salario liquido e %.2f",salario);
    }
        if(salario<=6000&&salario>1800)
    {
        contribuicao=salario *0.10;
        printf("\nA sua contribuicao sera de  %.2f",contribuicao);
        salario-=contribuicao;
        printf("\n O salario liquido e %.2f",salario);
    }
        if(salario>6000)
    {
        contribuicao=600;
        printf("\nA sua contribuicao sera de  %.2f",contribuicao);
        salario-=contribuicao;
        printf("\n O salario liquido e %.2f",salario);
    }
}
