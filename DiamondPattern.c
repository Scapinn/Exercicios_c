#include <stdio.h>

int main()
{
    int i, j, k, num, cha;


    scanf("%d", &num);
    scanf("%d", &cha);

    for(i= 0; i<num; i++)
    {
        for(j =i; j< num -1; j++)
        {
            printf(" ");
        }
        for(k =0;k <(2*i)+1 ; k ++ )
        {
            printf("%c", cha);
        }
        printf("\n");
    }
      for(i=num-2 ; i>=0; i--)
    {
        for(j = num - 1; j> i; j--)
        {
            printf(" ");
        }
        for(k =0 ;k <(2*i)+1 ; k++ )
        {
            printf("%c", cha);
        }
        printf("\n");
    }


    return 0;

}
