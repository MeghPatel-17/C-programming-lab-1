#include<stdio.h>
void main()
{
    int a[5];
    int i,t,j;
    printf("enter the values");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<4;j++)
    {
        for(i=0;i<4-j;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }



}
