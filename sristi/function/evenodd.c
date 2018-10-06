#include<stdio.h>
int evenodd(int);
int main()
{
 int num,flag;
 printf("Enter the number=");
 scanf("%d",&num);
 flag=evenodd(num);

 if(flag==1)
 printf("%d is a even number\n",num);
 else
 printf("%d is a odd number\n",num);

 return 0;
}
int evenodd(int n)
{
 if(n%2==0)
 return 1;
 else
 return 0;
}
