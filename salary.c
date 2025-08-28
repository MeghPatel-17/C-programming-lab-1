#include<stdio.h>
void main()
{
    float g,n,a,d;
    printf("enter the gross salary");
    scanf("%f",&g);
    if(g>10000)
    {
        a=g*10/100.0;
        d=g*3/100.0;
        n=g+a-d;
        printf("net salary: %f",n);

    }
    else if(g>5000)
    {
        a=g*7/100.0;
        d=g*2/100.0;
        n=g+a-d;
        printf("net salary: %f",n);
    }
}
