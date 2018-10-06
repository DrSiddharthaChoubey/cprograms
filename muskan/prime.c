#include<stdio.h>
int main()
{
int n,i;
printf("enter the no");
scanf("%d",&n);
i=2;
while(i<n)
{
if(n%i==10)
break;
else
i++;
}
if(i==n)

printf("%da prime",n);
else
printf("%dnot  prime",n);
return 0;

}
