#include<stdio.h>
int main()
{
char ans='y';
int num,poi=0,zero=0,neg=0;
 
while(ans=='Y'||ans=='y')
{
printf("enter the salary");
scanf("%d",&num);
if(num>0)
poi++;
 else 
if(num==0)
zero++;
else
neg++;
printf("\n do you want to repeat the loop");
scanf(" %c",&ans);}



printf("\n poistive =%d",poi);

printf("\n zero =%d",zero);


printf("\n negative=%d",neg);



return 0;
}
