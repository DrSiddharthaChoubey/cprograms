#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,per;
printf("entet the no.");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m4+m5)/5;
		       if(per>=60)
				printf("I div");
		else 
			if(per>=50)
				printf("II div");
		else 	
			if(per>=40)
				printf("III divi");
		else
					printf("fail");
 return 0;
}
