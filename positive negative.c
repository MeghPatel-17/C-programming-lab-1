 #include<stdio.h>
 void main()
 {
     int n,c=0,k=0,m=0,x;
     printf("enter the range");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {


         printf("enter the values");
         scanf("%d",&x);
         if(x>0)
            c++;
         else if(x<0)
            k++;
         else
            m++;


     }
    printf(" no of positive values is %d",c);
    printf(" no of negaitive values is %d",k);
    printf(" no of zero  is %d",m);
 }
