#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float Re, Im;
}TNumComp;

int main(){
    TNumComp n1, n2;

    printf("Apresente a parte real do numero complexo N1: ");
    scanf("%f", &n1.Re);
    printf("Apresente a parte imaginaria do numero complexo N1: ");
    scanf("%f", &n1.Im);

    printf("Apresente a parte real do numero complexo N2: ");
    scanf("%f", &n2.Re);
    printf("Apresente a parte imaginaria do numero complexo N2: ");
    scanf("%f", &n2.Im);

    printf("Soma entre os numeros: %.1f + %.1fi \n", n1.Re + n2.Re, n1.Im + n2.Im);
    printf("Subtracao entre os numeros: %.1f + %.1fi \n", n1.Re - n2.Re, n1.Im - n2.Im);

    return(0);
}
