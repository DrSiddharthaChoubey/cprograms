#include<stdio.h>
int main()
{
 int a1,a2,a3;
 printf("Enter the values of all three angles=\n");
 scanf("%d%d%d",&a1,&a2,&a3);

 if(a1+a2+a3==180)
 printf("Triangle is valid\n");

 else
 printf("Triangle is invalid\n");

 return 0;
}
