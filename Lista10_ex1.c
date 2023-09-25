#include <stdio.h>

double arredondaNumero(double numfinal)
{  int num = numfinal;
    double n = numfinal - num;
    if(n >= 0.5)
    {
        numfinal = (numfinal - n) +1;
        return numfinal;
    }
    else
    {
        numfinal =  numfinal - n;
        return numfinal;
    }
}


 int main()
 {
     double N= arredondaNumero(12.9);
    printf("%f", N);
    return 0;
 }

