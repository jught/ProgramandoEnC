#include <stdio.h>
//Programe un algoritmo que, dados dos números enteros que entran como datos, indique si uno es divisor del otro.
//http://www.unca.edu.mx/Cprog/archivos/GuiaEjercicios_C_Cprog_UNCA_2012.pdf
char* traduce(int n){
    if (n == 0) {return "no";}
    else {return "sí";}
    }
int main()
{  
    float n = 150;
    float m = 300;
    printf("%f  %s es divisor de %f", m, traduce(n%m == 0) ,n);
    return 0;
}
