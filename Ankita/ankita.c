#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of a and b");
scanf("%d %d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b; 
  
printf("After swaping a=%d,b=%d",a,b);
return 0;
}
