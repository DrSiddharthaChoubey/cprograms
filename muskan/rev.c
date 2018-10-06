#include<stdio.h>
int main()
{
int n,n1,a,rev=0;
printf("enter the no");
scanf("%d",&n);
n1=n;
while(n1>0)
{
a=n1%10;
rev=a+rev*10;
n1=n1/10;
}
if(n==rev)

printf("%da palindram",n);
else
printf("%dnot  palindram",n);
return 0;

}
