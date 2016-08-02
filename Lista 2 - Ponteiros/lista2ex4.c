#include <stdio.h>
#include <stdlib.h>
int main (void){
    char key, choice;
    int num=0, count=0;
    long int date=0;
    float yield=0;
    double price=0;
    printf ("key: %p \nchoice: %p \nnum: %p \ncount: %p \ndate: %p \nyield: %p \nprice: %p \n", &key, &choice, &num, &count, &date, &yield, &price);
    system ("pause");
    return(0);
}
