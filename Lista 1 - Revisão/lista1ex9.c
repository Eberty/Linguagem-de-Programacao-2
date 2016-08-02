#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char time[100]={};
    int vit = 0, emp=0,der=0,soma=0,somaPontos=0;
    printf("O nome do time e: ");
    gets(time);
    printf("Qual foi a quantidade de vitorias do time? ");
    scanf("%d",&vit);
    printf("Qual foi a quantidade de Empates? ");
    scanf("%d",&emp);
    printf("Qual a quantidade de derrotas? ");
    scanf("%d",&der);
    soma=(emp+der+vit)*3;
    somaPontos+=(vit*3)+(emp*1);
    printf("\n\nA equipe %s ganhou %d pontos no campeonato e perdeu %d pontos de um total de %d Pontos\n",time,somaPontos,soma-somaPontos,soma);
    return (0);
}
