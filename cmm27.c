#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,y;
    int t;
    int ans=0;
    scanf("%d%d",&x,&y);
    if((y-x)<0)
    {
        t=x;
        x=y;
        y=t;
    }
    for(i=x;i<=y;i++)
    {
        ans+=i;
    }
    printf("%d\n",ans);
    return 0;
}
