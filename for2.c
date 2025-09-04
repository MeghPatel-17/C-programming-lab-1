#include<stdio.h>
void main()
{
    int i,n;
    printf("ënter the range ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            printf("\n%d",i);
        }
    }
}
