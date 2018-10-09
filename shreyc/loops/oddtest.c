#include<stdio.h>
int main()
{
char ans='y';
int num,zero=0,pos=0,neg=0;
while(ans=='y' || ans=='y')
{
 printf("enter value");
 scanf("%d",&num);
 if(num>0)
  pos++;
 if(num==0)
  zero++;
 if(num<0)
  neg++;
 printf("\n\ndo you want more input");
 scanf(" %c",&ans);
}
printf("\npositive no=%d",pos);
printf("\nnegative no=%d",neg);
printf("\nzero no=%d",zero);
return 0;
}
