#include<stdio.h>
void main()
{
    float  g,n,d;
    printf("enter the gross salary");
    scanf("%f",&g);
    d=(g*10)/100.0;
    printf(" deduction %f",d);
    n=g-d;
    printf("net salary:%f",n);


}
