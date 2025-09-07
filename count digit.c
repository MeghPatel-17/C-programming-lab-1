#include<stdio.h>
void main()
{
    int rem,n,k;
    printf("enter a number");
    scanf("%d",&n);

while(n>0)
    {
    rem=n%10;
    k++;
    n=n/10;

    }
    printf("total no of number is:%d",k);

}
