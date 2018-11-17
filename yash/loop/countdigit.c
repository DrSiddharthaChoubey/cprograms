#include<stdio.h>
int main()
{
 int n,i,n1,count=0;
 printf("Enter the number=");
 scanf("%d",&n);

 n1=n;

 while(n1>0)
 {
  n1=n1/10;
  count++;
 }

 printf("%d have %d digits\n",n,count);

 return 0;
}
