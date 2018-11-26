#include<stdio.h>
int main()
{
char ans='y';
int num,zero=0,pos=0,neg=0;

while(ans=='y'||ans=='Y')
{
printf("enter the number");
scanf("%d",&num);
  if(num>0)
   pos++;
  if(num==0)
  zero++;
  if(num<0)
  neg++;
printf("do u want more input");
scanf(" %c",&ans);
}
printf("\n positive no=%d",pos);
printf("\n negative number=%d",neg);
printf("\n zero no=%d",zero);
return 0;
}





