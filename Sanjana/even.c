#include<stdio.h>

int main()
{
int num1,num2;

  
   printf("\n enter two no. to find even or odd");
   scanf("%d%d",&num1,&num2);


switch(num1%2==0)
{
case 0:printf("%d is odd\n",num1);
case 1: printf("%d is even ",num2);
}
return 0;
} 
