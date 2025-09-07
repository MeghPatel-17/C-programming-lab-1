#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
            printf("\n%d",i);
        sum=sum+i;
    }
    printf("\nsum of no is %d",sum);
}
