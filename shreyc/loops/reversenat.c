#include<stdio.h>
int main()
{
int i,n;
printf("enter the value of end point and starting point for reverse natural no.s");

scanf("%d%d",&n,&i);

printf("\nnatural numbers-->\n");
while(n<=i)
{
printf("%d\t",i);
i--;
}
return 0;
}
