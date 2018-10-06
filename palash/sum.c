#include <stdio.h>

int fibo(int n);

int main()
{
int n;

printf("Enter a number\n");
scanf("%d",&n);

fibo(n);

return 0;
}

int fibo(int n)
{
int t1=0,t2=1,num,f,a;

printf("The fibonacci series is :\n");

for(a=0;a<=n;a++)
{
printf("%d\t",t1);
f = t1 + t2;
t1 = t2;
t2 = f;
}
return 0;
}
