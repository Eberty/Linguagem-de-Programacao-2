#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	system ("color 0f");
    float km, l=0, kml=0, media=0, n=0;
    while (l!= -1){
        printf ("Entre com os litros consumidos (-1 para finalizar): ");
        scanf("%f", &l);
        if (l!=-1){
            printf("Entre com os quilometros percorridos: ");
            scanf("%f", &km);
            printf("A taxa km/litro para esse tanque foi: %f\n\n", km/l);
            n++;
            media+=(km/l);
        }
    }
        printf("\n A taxa total de km/litro foi: %f\n\n", media/n);
	system ("pause");
	return(0);
}
