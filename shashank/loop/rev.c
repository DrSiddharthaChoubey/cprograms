#include<stdio.h>
   int main()
 {
   int n,a,rev=0,n1;
   printf("Enter any number=");
   scanf("%d",&n);
   n1=n;
   while(n1>0)
   {
     a=n1%10;
     rev=a+rev*10;
      n1=n1/10;      
    }
 printf("%d",rev);
  if(n==rev)
    {
       printf("palindrom");
    }
  else
    printf("not a palandrom");
 return 0;
}
