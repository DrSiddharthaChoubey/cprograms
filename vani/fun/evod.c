#include<stdio.h>
int evod();
int main ()
{
int a,b;
printf("enter the n0.");
scanf("%d",&a);
b=evod(a);
if(b==1)
printf("even");
else
printf("odd");
return 0;
}
int evod(int x)
{
if(x%2==0)
return (1);
else
return (0);
}

