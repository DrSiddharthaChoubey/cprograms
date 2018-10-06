#include<stdio.h>
int main()
{
int i,j,choice,sum,sub,mul;
float div;
while(1)
{
printf("\t\t MENU");
printf("\n\t 1.SUM");
printf("\n\t 2.SUB");
printf("\n\t 3.MULTIPLY");
printf("\n\t 4.DIVISION");
printf("\n\t 5.EXIT");
printf("enter your choice\n\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("ENTER THE NO=\n");
scanf("%d%d",&i,&j);
sum=i+j;
printf("sum is %d",sum);
break;
case 2:
printf("ENTER THE NO=\n");
scanf("%d%d",&i,&j);
sub=i-j;
printf("sub is %d",sub);
break;
case 3:
printf("ENTER THE NO=\n");
scanf("%d%d",&i,&j);
mul=i*j;
printf("mul is %d",mul);
break;
case 3:
printf("ENTER THE NO=\n");
scanf("%d%d",&i,&j);
div=i/j;
printf("div is %f",div);
break;
}
return 0;
}





