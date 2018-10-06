#include<stdio.h>
   int main()
 {
   int n,a,sum=0,n1;
   printf("Enter any number=");
   scanf("%d",&n);
   n1=n;
   while(n1>0)
   {
     a=n1%10;
     sum=sum+a;
     n1=n1/10;
    }
printf("sum=%d",sum);
 return 0;
}
