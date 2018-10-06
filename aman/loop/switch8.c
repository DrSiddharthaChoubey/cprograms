#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,r1,r2;
printf("enter th no.=");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
switch(d==0)
{
case 0:
r1=(-b+pow(d,1/2))/2*a;
r2=(-b-pow(d,1/2))/2*a;
printf("roots are unequal=%d%d",r1,r2);
break;
case 1:
r1=(-b-pow(d,1/2))/2*a;
printf("roots are equal=%d%d",r1,r1);
break;

}
return 0;
}

