
#include<stdio.h>
void main()
{
    int i,l,s,k=1,m=0;
    for(i=1;i<=100;i++)
    {
        if(i<=k)
        {
            k=i;
            s=k;
        }



    }
    printf("%d smallest is",s);
    for(i=1;i<=100;i++)
    {
        if(i>m)
        {
            m=i;
            l=m;
        }
    }
    printf("%d largest is",l);
}
