#include<stdio.h>
int main()
{
 int num,ocnum=1,foct=0,temp,n;
 printf("Enter the number=");
 scanf("%d",&num);

 n=num;

 while(num>=8)
 {
  temp=num%8;
  num=num/8;
  ocnum=(ocnum*10)+temp;
 }
 ocnum=(ocnum*10)+num;

 while(ocnum!=1)
 {
  temp=ocnum%10;
  ocnum=ocnum/10;
  foct=(foct*10)+temp;
 }

 printf("\n\t\tThe octal equivalent of %d is %d\n",n,foct);

 return 0;
}
