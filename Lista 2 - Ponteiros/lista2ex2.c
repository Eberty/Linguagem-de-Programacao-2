#include <stdio.h>
#include <stdlib.h>
int main (){
    float a=2,b=4,c=5,*pa,*pb,*pc;
    pa=&a;
    pb=&b;
    pc=&c;
    printf ("a: %.2f \nb: %.2f \nc: %.2f\n", *pa, *pb, *pc);
    system ("pause");
    return(0);
}
