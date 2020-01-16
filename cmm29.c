#include <stdio.h>
#include <stdlib.h>


int prime(int n)
{
    int i;
    if(n==1)return 0;
    else
    {
        for(i=2;i<n;i++)
        {
            if((n%i)==0)return 0;
        }
    }
    return 1;
}

int main()
{
   int n;
   int i,j;
   int flag=0;
   scanf("%d",&n);
   for(i=n-1;i>0;i--)
   {
       if(prime(i)==1)
       {
           printf("%d\n",i);
            break;
       }
   }
   //printf("%d\n",i);
    return 0;
}
