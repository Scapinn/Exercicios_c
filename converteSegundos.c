#include <stdio.h>
void segundosParaHMS (int total_segundos, int *h, int *m, int *s)
{
    *h = total_segundos/(60*60);
    total_segundos = total_segundos%(60*60);
    *m = (total_segundos/60);
    total_segundos = total_segundos%60;
    *s = total_segundos ;
}

int main()
{ int h, m, s, total_segundos=  20000;
    segundosParaHMS(total_segundos, &h, &m, &s);
    printf("%d/ %d/ %d", h, m, s);
    return 0;
}
