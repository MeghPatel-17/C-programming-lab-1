#include<stdio.h>
void main()
{
    int s1,s2,s3,total;
    float avg;
    printf("enter the marks in three subject");
    scanf("%d%d%d",&s1,&s2,&s3);
    total=s1+s2+s3;
    avg=total/3.0;
    printf("the total marks:%d",total);
    printf("\naverage marks is:%d",avg);
}
