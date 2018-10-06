#include<stdio.h>
int main()
{
int s1,s2,s3,sum,large;
printf("enter the three sides");
scanf("%d%d%d",&s1,&s2,&s3);
if(s1>s2 && s1>s3)
{
  if(s2+s3>s1)
     printf("triangle is valid");
else 
    printf("triangle is not valid");
}
if(s2>s1 && s2>s3)
{
if(s1+s3>s2)
    printf("triangle is valid");
else 
    printf("triangle is not valid");
}
if(s3>s1 && s3>s2)
{
if(s1+s2>s3)
    printf("triangle is valid");
else 
    printf("triangle is not valid");
}
return 0;
}
