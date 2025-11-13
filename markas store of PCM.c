#include<stdio.h>
int main(){
int r;
printf("Enter no of students:");
scanf("%d",&r);
int c;
c = 3;
int arr[r][3];

for(int i=0;i<r;i++){
printf("\nEnter marks for students:%d\n",i+1);
printf("Enter physics marks:");
scanf("%d",&arr[i][0]);
printf("Enter chemistry marks:");
scanf("%d",&arr[i][1]);
printf("Enter maths marks:");
scanf("%d",&arr[i][2]);
}

printf("\n=======marksheet==========\n");
for(int i=0;i<r;i++){
printf("student %d %d %d %d\n ",i+1,arr[i][0],arr[i][1],arr[i][2]);// physics chemistry maths
}
printf("\n");









return 0;
}
