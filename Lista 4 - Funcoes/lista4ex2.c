#include <stdio.h>
#include <stdlib.h>

int BinarioToDecimal(int);

int main(){
    int dec, bin;

    printf("Entre com um inteiro (0's e 1's): ");
    scanf("%d", &bin);

    dec = BinarioToDecimal(bin);

    printf("Bin = %d \nDec = %d\n", bin, dec);

    return 0;
}


int BinarioToDecimal(int bin){
    int total  = 0, potenc = 1;

    while(bin > 0) {
        total += bin % 10 * potenc;
        bin    = bin / 10;
        potenc = potenc * 2;
    }

    return total;
}
