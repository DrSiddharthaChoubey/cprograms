/* write a c prog to make the fibonacci sequence*/



#include<stdio.h>
int main()
{
int n,n1=0,n2=1,n3,terms,i;
printf("enter the terms");
scanf("%d",&terms);
printf("%d%d\n",n1,n2);
i=3;
while(i<=terms)
  {
   n3=n1+n2;
   n1=n2;
   n2=n3;
  printf("%d \t",n3);
  i++;
  }
return 0;
}






