#include <stdio.h>
#include <stdlib.h>
//30*2.54=76.2=0.762m/s
//each second the distance minus 1-0.762m=0.238m
int main()
{
    int dis;
    double ans;
    int p;
    scanf("%d",&dis);
    ans=dis/0.238;
    ans=ans+0.9;
    p=(int)ans;
    printf("%d\n",p);
    return 0;
}
