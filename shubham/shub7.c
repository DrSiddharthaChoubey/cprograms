#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,x1,y1,x2,y2,x3,y3;
printf("enter the value of x1,x2,x3,y1,y2,y3");
scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
a=abs(x2-x1)/abs(y2-y1);
b=abs(x3-x1)/abs(y3-y1);
c=abs(x3-x2)/abs(y3-y2);
if(a==b==c)
printf("coordinates lie in a straight line");
else
printf("tey dont lie on a straight line");
return 0;
}
