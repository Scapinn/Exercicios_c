#include <stdio.h>


double casadecimal(double num)
{
    int numInt =  num;
    num = num - numInt;
    return num;
}

 int main()
 {
     printf("%f", casadecimal(12.34));

 }
