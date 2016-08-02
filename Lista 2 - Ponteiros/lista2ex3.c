#include <stdio.h>
#include <stdlib.h>
int main (void){
    float a=2,b=4,c=5,*p;
    p=&a;
    printf ("a: %.2f\n", *p);
    p=&b;
    printf ("b: %.2f\n", *p);
    p=&c;
    printf ("c: %.2f\n", *p);
    system ("pause");
    return(0);
}
