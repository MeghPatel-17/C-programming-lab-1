#include<stdio.h>
void main()
{
    int n,sum=0,i;
    printf("enter the range to bee sumed");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        sum=sum+(2*n-1);

    }
    printf("sum of n odd no is%d",sum);

}
