#include <stdio.h>
#include <stdlib.h>
int main (void){
    char key, choice;
    int num=0, count=0;
    long int date=0;
    float yield=0;
    double price=0;
    printf ("key: %p \nchoice: %p \nnum: %p \ncount: %p \ndate: %p \nyield: %p \nprice: %p \n", &key, &choice, &num, &count, &date, &yield, &price);
    printf("\nO tamanho de Key e %d Byte",sizeof(key));
    printf("\nO tamanho de choice e %d Byte",sizeof(choice));
    printf("\nO tamanho de num e %d Bytes",sizeof(num));
    printf("\nO tamanho de count e %d Bytes",sizeof(count));
    printf("\nO tamanho de date e %d Bytes",sizeof(date));
    printf("\nO tamanho de yield e %d Bytes ",sizeof(yield));
    printf("\nO tamanho de price e %d Bytes\n",sizeof(price));
    system ("pause");
    return(0);
}
