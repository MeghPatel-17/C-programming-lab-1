#include<stdio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%7==0)
    {
        printf("divisible by 7");
    }
    else if(n%7!=0)
    {
        printf("not dividible");
    }
}
