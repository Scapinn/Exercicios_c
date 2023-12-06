#include <stdio.h>

void stling (char * string, char * novaStling )
{
    int i=0,j=0;

    while(!string[i]== '\0')
    {
        if(string[i]!= 'r' && string[i]!= 'R')
        {
            novaStling[j]= string[i];
            i++;
            j++;
        }

        else if( i>0 &&  string[i + 1]== 'r' || string[i+1] == 'R')
        {
            novaStling[j]='l';
            i += 2;
            j++;
        }
        else
        {
            novaStling[j] = 'l';
            i++;
            j++;
        }
    }
}
int main()
{
    char string[100], nova[100];

    scanf("%s", string);

    stling(string, nova);

    printf("%s", nova);

}
