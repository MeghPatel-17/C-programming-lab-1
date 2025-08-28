#include<stdio.h>
void main()
{
    int m1,m2,m3,total;
    float a;
    printf("enter the marks in 3 subjects");
    scanf("%d%d%d:",&m1,&m2,&m3);
    if(m1<35||m2<35||m3<35)
        printf("student fail");
    total=m1+m2+m3;
    a=total/3.0;
    if(a>=75)
    {
        printf("DISTINCTION");

    }
    else if(a>=60)
    {
        printf("FIRST");
    }
    else if(a>=50)
    {
        printf("second");
    }
    else if(a>=35)
    {
        printf("third class");
    }
    else
    {
        printf("fail");
    }
}



