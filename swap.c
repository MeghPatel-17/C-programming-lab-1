#include<stdio.h>
void main()
{
    int  a,b,c;
    printf("enter the values");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;
    printf("swapped value of a and b=%d%d\n",a,b);



}
