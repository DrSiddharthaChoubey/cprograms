#include<stdio.h>
int main()
{
 char ans='y';
 int num,z=0,p=0,n=0;

 while(ans=='y' || ans=='Y')
 {
  printf("Enter the number=");
  scanf("%d",&num);

  if(num>0)
  p++;

  if(num==0)
  z++;

  if(num<0)
  n++;

  printf("\n\nDo you want more input=");
  scanf(" %c",&ans);
 }

 printf("Zero's=%d\n",z);
 printf("Positive number=%d\n",p);
 printf("Negative number=%d\n",n);

 return 0;
}
