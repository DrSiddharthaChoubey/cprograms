#include<stdio.h>
int main()
{
int num,zero=0,pos=0,neg=0;
char ans='y';
 while(ans=='y' || ans=='Y');
{
printf("\n enter value");
scanf("%d",&num);
if(num>0)
   pos++;
if(num==0)
zero++;
if(num<0)
neg++;
printf("\n\nDo u wnt mre input");
scanf(" %c",&ans);
}
printf("\npositive no=%d",pos);
printf("\nnegtve no=%d",neg);
printf("\nzero   no=%d",zero);
return 0;
}
