#include<stdio.h>
int add(int);
int main(){
int n,flag; 
printf("addition of two nos");
scanf("%d",&n);
flag=add(n);
if (flag==1)
printf("%d is even no",n);
else 
printf("%d is odd no",n);

return 0;
}
int add(int num){
int flag;
if (num%2==0)
return 1;
else
return 0;
 
}

