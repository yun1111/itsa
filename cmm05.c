//correct
#include <stdio.h>
#include <stdlib.h>
//#include<math.h>

int main()
{
    double x;
    double area;
    scanf("%lf",&x);
    area=x*x;
    area=area*10;
    //area=round(area);
    area=area+0.5;
    area=(int)area;
    area=(double)area;
    area=area/10;
    printf("%.1lf\n",area);
    return 0;
}
