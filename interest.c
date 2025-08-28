#include<stdio.h>
void main()
{
    float p,r,t,i;
    printf("enter the principal:");
    scanf("%f",&p);
    printf("enter the rate of interest:");
    scanf("%f",&r);
    printf("enter the tenure:");
    scanf("%f",&t);
    i=p*r*t/100.0;
    printf("interest is:%f",&i);
