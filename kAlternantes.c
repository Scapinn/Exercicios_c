#include <stdio.h>

int main()
{
    int num, numImpar=0, numPar= 0, auxImpar= 0, auxPar =0;
    scanf("%d", &num);

    while(num > 0)
    {
        if(num%10%2 ==0)
        {
            while(num>0)
            {
                if(!num%10%2 ==0)
                    break;

                numPar ++;
                auxPar ++;
                num = num/10;

            }
        }

        else
        {

            while(num> 0)
            {
                if(num%10%2 ==0)
                    break;
                numImpar ++;
                auxImpar ++;
                num =num/10;
            }
        }

        if(!auxImpar == auxPar)
            return 0;


    }
    return 1;
}
