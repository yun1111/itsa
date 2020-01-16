#include <stdio.h>
#include <stdlib.h>
#define DAY 24
#define HOUR 60
#define MIN 60
int main()
{
    int time;
    scanf("%d",&time);
    int d,h,m,s;
    d = time/(DAY*HOUR*MIN);
    time = time - d* (DAY*HOUR*MIN);
    h = time/(HOUR*MIN);
    time = time - h* (HOUR*MIN);
    m = time/(MIN);
    time = time - m* (MIN);
    s=time;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n",d,h,m,s);
    return 0;
}
