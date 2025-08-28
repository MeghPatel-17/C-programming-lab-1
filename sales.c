#include<stdio.h>
void main()
{
    float g,n,d;
    printf("enter the gross salary");
    scanf("%f",&g);
    if(g>20000)
    {

        d=g*15/100.0;
        n=g-d;
        printf("net salary: %f",n);

    }
    else if(g>10000)
    {

        d=g*10/100.0;
        n=g-d;
        printf("net salary: %f",n);
    }
    else
    {

        d=g*5/100.0;
        n=g-d;
        printf("net salary: %f",n);
    }
}

