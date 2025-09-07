#include<stdio.h>
void main()
{
    int n,s,l,i;
    for(i=1;i<=100;i++)
    {
        printf("enter 100 values");
        scanf("%d",&n[i]);
         int k=n[1];
    }
    for(i=1;i<=100;i++)
    {
        if(n[i]<k)
        {
            s=k;
        }
        if(n[i]>k)
        {
            l=k;
        }
    }
    printf("smallest no is:%d",s);
    printf("largest no is:%d",l);
}
