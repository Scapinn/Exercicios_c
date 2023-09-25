#include <stdio.h>

int main()
{
    int i, j=0,  num, achou=1;

    scanf("%d",&num);
    while(achou )
    {
        j++;
        for( i= 1; i<= num ; i++)
        {
           if(j%i != 0)
           {
               break;
           }
           else if(i == num)
           {
               achou =0;
           }
        }

    }
    printf("%d",j);
    return 0;

}
