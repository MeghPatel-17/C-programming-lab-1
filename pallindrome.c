#include<stdio.h>
void main()
{
    int rem,n,k=0,m;
    printf("enter a number");
    scanf("%d",&n);
m=n;


while(n>0)
    {



    rem=n%10;
    k=k*10+rem;

    n=n/10;

    }
if(k==m)
    printf("it is a pallindrome no");
    else
        printf("not");
}
