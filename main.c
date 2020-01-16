#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   int i,j;
   int flag=0;
   scanf("%d",&n);
   for(i=n;i>0;i--)
   {
       //printf("i=%d ",i);
       for(j=2;j<i;j++)
       {
           printf("j=%d ",j);
           if((i%j)!=0)
           {
               printf("i=%d,j=%d",i,j);
               flag=1;
               break;
           }
       }
       if(flag==1)break;
   }
   printf("%d\n",i);
    return 0;
}
