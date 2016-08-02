#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int ss,hh,mm;
    printf("Esse programa recebera uma quantidade qualquer de segundos\nEste programa imprimira estilo hh:mm:ss");
    printf("\n\nDigite uma quantidade de seguntos qualquer\n");
    scanf("%d",&ss);
    if(ss>86400)
        printf("Esse valor excede o valor de horas de um dia");
    else{
        hh=ss/3600;
        mm=(ss%3600)/60;
        ss=ss%60;
    }
    printf("O horario eh %02d : %02d : %02d",hh,mm,ss);
    return (0);
}
