#include<stdio.h>
int main()
{float a,b,c,sum;
printf("enter the 3 angles of triangle:");
scanf("%f%f%f",&a,&b,&c);
sum=a+b+c;
if(sum==180)
{printf("it is a valid triangle");
}
else
{printf("it is not valid");
}
return 0;
}
