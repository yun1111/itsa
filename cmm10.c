#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c,f;
    scanf("%lf",&c);
    f=c*9/5+32;
    f=f*10;
    f=f+0.5;
    f=(int)f;
    f=(double)f;
    f=f/10;
    printf("%.1lf\n",f);
    return 0;
}
