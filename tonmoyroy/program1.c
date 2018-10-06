#include<stdio.h>
int main()
{
char ans='y';
int num,zero=0,pos=0,neg=0;
  while(ans=='y' || ans=='Y')
   {
	printf("\nenter the value");
	scanf("%d",&num);
	if(num>0)
	   pos++;
	if(num==0)
	   zero++;
	if(num<0)
	   neg++;
	printf("\ndo you want more input\n");
	scanf("%c",&ans);
   }
printf("\npositive no =%d\n",pos);
printf("\nnegetive no =%d\n",neg);
printf("\nzero no =%d\n",zero);
return 0; 
}
