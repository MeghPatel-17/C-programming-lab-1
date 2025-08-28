#include<stdio.h>
void main()
{
    float n,c,d,x;
    printf("enter no of bytes");
    scanf("%f",&n);
    c=n/1000.0;
    d=n/1000000.0;
    x=n/1000000000.0;
    printf("bytes to kb is:%f\n",c);
    printf("\nbytes to mb is:%f",d);
    printf("bytes to gb is:%f\n",x);


}
