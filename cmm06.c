//correct
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in;
    double out;
    scanf("%d",&in);
    out=in*1.6;
    out=out*10;
    out=out+0.05;
    out=(int)out;
    out=(double)out;
    out=out/10;
    printf("%.1lf\n",out);
    return out;
}
