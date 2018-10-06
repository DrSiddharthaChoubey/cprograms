#include<stdio.h>
 int main()
{
int num,zero=0,pos=0,neg=0;
char ans='y';
while(ans=='y' || ans=='Y')
{
printf("enter the value\n");
scanf("%d",&num);
if(num>0)
pos++;
if(num==0)
zero++;
if(num<0)
neg++;
printf("do you want more input\n");
scanf(" %c",&ans);
}
printf("positive no=%d\n",pos);
printf("zero no=%d\n",zero);
printf("negative no=%d\n",neg);
return 0;
}

