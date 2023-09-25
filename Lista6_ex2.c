#include <stdio.h>

int main()
{
    int num, num1, num2,num3,num4, soma;
    printf("Digite um numero com 4 algoritmos");
    scanf("%d", &num);

    num1=((num- num%100))/100;
    num2= (num%100);
    num3 = num1 + num2;
    printf("%d %d %d %d",num1,num2, num3, num3*num3);

    return 0;
}
