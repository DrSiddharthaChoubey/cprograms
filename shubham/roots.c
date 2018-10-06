#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,r,r1,r2;
printf("enter the nos=\n");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
switch(d==0)
{
case 0:
printf("the roots are unequal");
r1=(-b+pow(d,1/2))/2*a;
r2=(-b+pow(d,1/2))/2*a;
printf("%d%d\n\n",r1,r2);
break;
case 1:
printf("the roots are equal");
r=(-b+pow(d,1/2))/2*a;
printf("%d%d\n\n",r,r);
break;
}
return 0;
}
