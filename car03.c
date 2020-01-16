#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8];
    int i;
    int ans=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        ans += a[i]*a[i]*a[i];
    }
    printf("%d\n",ans);
    return 0;
}
