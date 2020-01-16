#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int output[8];
    int i;
    int flag=0;
    scanf("%d",&input);
    if(input<0)
    {
        flag=1;
        input=input*(-1);
    }
    for(i=0;i<8;i++)
    {
        output[i]=input%2;
        input=input/2;
    }
    if(flag==1)
    {
        //reverse 1->0  0->1
        for(i=0;i<8;i++)
        {
            if(output[i]==1)
                output[i]=0;
            else output[i]=1;
        }
        //+1
        i=0;
        while(output[i]!=0)
        {
            output[i]=0;
            i++;
        }
        output[i]=1;

    }
    for(i=7;i>=0;i--)
    {
        printf("%d",output[i]);
    }
    printf("\n");

    return 0;
}
