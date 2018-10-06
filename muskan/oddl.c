#include<stdio.h>
int main()
{
int num, zero=0,pos=0,neg=0;

     char ans='y';

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

   printf("\n\n do u wnant more input");
   scanf(" %c",&ans);
 }  
printf("\npositive no is%d",pos);
printf("\nnegative no is%d",neg);
printf("\nzero no is%d",zero);
return 0;
}  

