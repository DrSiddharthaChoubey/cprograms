#include<stdio.h>
int main(){
int n,m,i,sum=0;
printf("enter no.");
scanf("%d",&n);
for(i=2;i<=(n/2)+1;i++)
{
if (n%i==0)
sum+=1;
}
(sum>=1) ? printf("it is not prime no.\n"):printf("it is not prime no.\n");
}



