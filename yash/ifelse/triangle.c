#include<stdio.h>
int main()
{
 int t1,t2,t3;
 printf("Enter the lengths of three sides of triangle=\n"); 
 scanf("%d%d%d",&t1,&t2,&t3);

 if(t1>t2 && t1>t3)
 {
  if(t2+t3>t1)
  printf("Triangle is valid\n");

  else
  printf("Triangle is not valid\n");
 }

 if(t2>t1 && t2>t3)
 {
  if(t1+t3>t2)
  printf("Triangle is valid\n");

  else
  printf("Triangle is not valid\n");
 }

 if(t3>t2 && t3>t1)
 {
  if(t1+t2>t3)
  printf("Triangle is valid\n");

  else
  printf("Triangle is not valid\n");
 }

 return 0;
}
