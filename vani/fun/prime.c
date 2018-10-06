#include<stdio.h>
int prime(int);
int main()
{
int a,p;
printf("enter the value");
scanf("%d",&a);
p=prime(a);
if (p==1)
printf("\n\tprime");
else
printf("\n\t  not a prime");
return 0;
}

int prime(int x)
{
int i=2;
while(i<x)

{if(x%i==0)
break;
else
i++;
}
if(i==x)
return 1;
else 
return 0;
}

