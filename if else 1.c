#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two values");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("a is largest %d",a);
        printf("bis smallest %d",b);
    }
    else if(b>a)
    {
        printf("b is largest %d",b);
        printf("\n a is smallest %d",a);
    }
}
