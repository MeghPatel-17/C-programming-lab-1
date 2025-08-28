#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is largest %d",a);
    }
        if(b>a&&b>c)
        {
          printf("\n b is largest %d",b);
        }
        if(c>a&&c>b)

        {
          printf("\n c is largest %d",c);
        }



    else if(b<a&&b<c)
    {
        printf("b is smallest %d",b);
    }
         else if(a<b&&a<c)
        {
             printf("\n a is smallest %d",a);
        }
         else if(c<a&&c<a)
        {
          printf("\n c is smallest %d",c);
        }

}






