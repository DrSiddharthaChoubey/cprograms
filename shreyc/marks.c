#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,per;
printf("enter the marks");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m4+m5)/5;
if(per>=60)
	printf("1st div");
else if(per>=50)
	printf("2nd division");
else if(per>=40)
	printf("3rd division");
else
	printf("fail");
return 0;
}
