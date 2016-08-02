#include<stdio.h>
#include<stdlib.h>

void SegundostoHoras (int);

int main(){
    int ss;
    printf("Digite uma quantidade de seguntos qualquer\n");
    scanf("%d",&ss);

    SegundostoHoras(ss);
    printf("\n");

    return 0;
}

void SegundostoHoras(int ss){
    int hh,mm;
    if(ss>86400){
        printf("Esse valor excede o valor de horas de um dia\n");
        exit(-1);
    }
    else{
        hh=ss/3600;
        mm=(ss%3600)/60;
        ss=ss%60;
    }
    printf("O horario eh %02d:%02d:%02d",hh,mm,ss);
}
