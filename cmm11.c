#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value;
    int t,f,o;
    scanf("%d",&value);
    t=value/10;
    value-=t*10;
    f=value/5;
    value-=f*5;
    o=value/1;
    printf("NT10=%d\nNT5=%d\nNT1=%d\n",t,f,o);
    return 0;
}
