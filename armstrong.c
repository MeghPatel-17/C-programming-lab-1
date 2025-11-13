#include<stdio.h>
void main()
{
    int n,rem,sum=0,m;
     printf("eneter a number");
     scanf("%d",&n);
     m=n;
     while(n!=0)
     {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
     }
     if(sum==m)
     {
         printf("it is a armstrong no");
     }
     else
        printf("not");
}
