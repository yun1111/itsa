#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<(n+1);i++)
    {
        printf("%d*%d=%d\n",i,i,i*i);
    }
    return 0;
}
