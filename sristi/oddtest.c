#include<stdio.h>
int main()
{
char ans='y';
int num,zero=0,positive=0,negative=0;

while(ans=='y' || ans=='y')
{
 printf("enter value");
 scanf("%d", &num);
 if(num>0)
   positive++;
 if(num==0)
   zero++;
 if(num<0)
   negative++;
 
 printf("\n\ndo u want more input");
 scanf(" %c", &ans);
}
printf("\n zero no=%d",zero);
printf("\n positive no=%d",positive);
printf("\n negative no.=%d",negative);
return 0;
}
