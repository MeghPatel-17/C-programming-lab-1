#include<stdio.h>
void main()
{
     int n=0,m=0,i;
     char code;
    for(i=1;i<=50;i++)
    {




        printf("enter the sex code M or F:");
        scanf("%s",&code);

        if(code=='M')


            m++;


        else if(code=='F')


            n++;


    }
    printf("no of boys is %d",m);
    printf("no of girls is %d",n);

}

