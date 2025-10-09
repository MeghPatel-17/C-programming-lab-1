#include<stdio.h>
void main()
{
int i,j;
int a[4][4];

for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {

        printf("enter values\n");
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
    {
        printf("%d\t",a[j][i]);

    }
    printf("\n");
}


}

