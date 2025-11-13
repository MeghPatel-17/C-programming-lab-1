#include<stdio.h>
#include<string.h>
int main(){
char str[40];
//scanf("%s",str);// only the first world will be considewred
gets(str);
printf("your input was:%s",str);
return 0;


}
