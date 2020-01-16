#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start_h,start_m;
    int fin_h,fin_m;

    int min;
    int money;
    scanf("%d%d%d%d",&start_h,&start_m,&fin_h,&fin_m);

    //how long?
    min=(fin_h*60+fin_m)-(start_h*60+start_m);
    if(min>240)
    {
        money=280+(min-240)/30*60;
    }
    else if(min>120)
    {
        money=120+(min-120)/30*40;
    }
    else if(min<30)
    {
        money=0;
    }
    else
    {
        money=min/30*30;
    }
    printf("%d\n",money);
    return 0;
}
