#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long long int ans=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    printf("%lld\n",ans);
    return 0;
}
