#include<stdio.h>
int main()
{
int n1=0,n2=1,n3,i,term;
printf("enter the term=");
scanf("%d",&term);
printf("%d%d",n1,n2);
i=3;
while(i<=term)
{
n3=n1+n2;
n2=n1;
n3=n2;
printf("%d",n3);
i++;
}

return 0;
}
