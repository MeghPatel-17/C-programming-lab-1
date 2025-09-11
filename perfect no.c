#include<stdio.h>
void main()
{
    int n,i,sum=0;
     printf("enter a number");
     scanf("%d",&n);
     for(i=1;i<=n/2;i++)
     {
         if(n%i==0)
         {
             sum=sum+i;
             printf("\n%d",i);
         }

     }
     if(sum==n)
        printf("perfect no");
     else
        printf("not");
}

