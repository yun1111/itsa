#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int dis;
    scanf("%d%d",&x,&y);
    dis=x*x+y*y;
    if(dis<=10000)printf("inside\n");
    else printf("outside\n");
    return 0;
}
