#include <stdio.h>

int main()
{
    int num, i,j, character,k;
    scanf("%d" , &num);
    scanf("%d", &character);

    for(i = 0; i<= num; i++ )
    {
        for(j= i; j<=num ; j++ )
        {
            printf(" ");


        }


            printf("%c", character);

        printf("\n");
    }

}
