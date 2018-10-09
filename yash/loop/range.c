#include<stdio.h>
int main()
{
 int l=3000,s=-3000,r,n;
 char choice='y';

 while(choice=='y')
 {
  printf("Enter a number=");
  scanf("%d",&n);

  if(s<n)
  s=n;

  if(n<l)
  l=n;

  printf("Do you want to add another number y/n:");
  scanf(" %c",&choice);
 }

 r=l-s;
 printf("Range is %d\n",r);

 return 0;
}
