#include<stdio.h>
void swap(int*,int*);
int main()
{
int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
printf("before swapping a=%d b=%d",a,b);
swap(&a,&b);
printf("after swapping a=%d b=%d",a,b);
return 0;
}
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

