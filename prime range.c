#include<stdio.h>
void main()
{
    int n,i,c=0,j;
     printf("enter the range");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=i;j++)
         {
             if(i%j==0)
             {
                 c++;
                 if(c<=2)
         {
             printf("\n%d",i);
         }

             }

         }




     }
}
