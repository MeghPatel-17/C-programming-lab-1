#include<stdio.h>
void main()
{
    int n,i,f=1;
    printf("enter a number for factorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factotial of %d is%d",n,f);

}
