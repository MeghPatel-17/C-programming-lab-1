#include<stdio.h>
void main()
{
    int i,sum=0,m,n;
    float mn;
    printf("enter the range");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter numbers");
        scanf("%d",&m);
        sum=sum+m;

    }
    printf("sum of the value is %d",sum);
    mn=sum/n;
    printf("\nmeans is %f",mn);
}
