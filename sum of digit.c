#include<stdio.h>
void main()
{
    int rem,n,sum=0;
    printf("enter a number");
    scanf("%d",&n);

while(n>0)
    {
    rem=n%10;
    sum=sum+rem;
    n=n/10;

    }
    printf("sum of digit is %d:",sum);

}
