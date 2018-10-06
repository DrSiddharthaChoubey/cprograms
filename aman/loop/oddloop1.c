#include<stdio.h>
int main()
{
int n;
char ans='y';
printf("enter the no.");
scanf("%d",&n);
for(;ans=='y' || ans=='Y';)                                                    ;
{

if(n>0)
printf("its positive no.");
else if(n<0)
printf("its negative no.");
else if(n==0)
printf("its 0");
printf("do u wnt to enter another no.");
scanf(" %c",&ans);
}
return 0;
}

