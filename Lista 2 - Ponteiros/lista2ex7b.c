#include<stdio.h>
#include<stdlib.h>
int main(void){
    float kms[]={240.5,300.0,189.6,310.6,280.7,216.9,199.4,160.3,177.4,192.3};
    float lts[]={10.3,15.6,8.7,14.0,16.3,15.7,14.9,10.7,8.3,8.4};
    float kpl[10]={}, *p;
    int i;

    for (i=0;i<10;i++){
        kpl[i] = *(kms + i) / *(lts + i);
        p=&kpl[i];
        printf("\nPara posicao %d, a media de Km/l e %.2f",i,*p);
    }
    printf("\nNota��o usando aritimetica de pnteiros\n");
    system ("pause");
    return(0);

}
