#include<stdio.h>
int main()
{
int i,n1=0,n2=1,n3,terms;
printf("enter the no. of terms");
scanf("%d",&terms);
printf("%d%d",n1,n2);
i=3;
while(i<=terms)
{
n3=n1+n2;
n1=n2;
n2=n3;
 printf("%d\t",n3);
i++;
}
return 0;
}
