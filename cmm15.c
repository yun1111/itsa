#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if((x>=0)&&(x<=100)&&(y>=0)&&(y<=100))printf("inside\n");
    else printf("outside\n");
    return 0;
}
