#include<stdio.h>
void main()
{
    int a[]={500,200,100,50,20,10,5,2,1};
    int m,i,c[9];

    printf("enter the amount");
    scanf("%d",&m);
    for(i=0;i<9;i++)
    {
        c[i]=0;
    }
    i=0;
    while(m>0)
    {
        if(m>=a[i])
        {
            m=m-a[i];
            c[i]=c[i]+1;

        }
        else if(i>8)
        {
            break;
        }
        else
        {
            i=i+1;
        }

    }
    for(i=0;i<9;i++)
    {
        printf("%d=%d\n",a[i],c[i]);
    }
}



