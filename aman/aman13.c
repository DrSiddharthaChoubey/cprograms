#include<stdio.h>
#include<math.h>
int main()
{
float x1,y1,x2,y2,x3,y3,a,b,c;
printf("enter the value of x1,y1,x2,y2,x3,y3=");
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
a=abs(x2-x1)/abs(y2-y1);
b=abs(x3-x2)/abs(y3-y2);
c=abs(x3-x1)/abs(y3-y1);
if(a==b&&b==c&&c==a)
printf("the points lie on the line");
else
printf("the points dont lie on the line");

return 0;
}

