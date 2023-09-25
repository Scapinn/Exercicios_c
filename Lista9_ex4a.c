#include <stdio.h>

int main()
{
    int i, j, num;

    scanf("%d", &num);

    for(i = 0 ; i < num ; i++)
    {
        for(j =i; j<num ; j++)
        {
        printf("%c", 'A'+ (j-i));

        }
        printf("\n");
    }

}

