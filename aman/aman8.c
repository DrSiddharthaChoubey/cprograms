#include<stdio.h>
int main()
{
float m,p,c,ts;
printf("enter your marks in maths=\n");
scanf("%f",&m);
printf("enter your marks in physics=\n");
scanf("%f",&p);
printf("enter your marks in chemistry=\n");
scanf("%f",&c);
if(m>=60&&p>=50&&c>=40&&m+p+c>=200||m+p>=150);
printf("you are selected");
else
printf("you are not elligible");
return 0;
}
