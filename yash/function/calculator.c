#include<stdio.h>
void calc(int,int,int*,int*,int*);
int main()
{
 int a,b,add,sub,multi;
 printf("Enter the value of a=");
 scanf("%d",&a);
 printf("Enter the value of b=");
 scanf("%d",&b);

 calc(a,b,&add,&sub,&multi);
 printf("\n\nAddition of %d(a) and %d(b)=%d\n\n",a,b,add);
 printf("Subtraction of %d(a) and %d(b)=%d\n\n",a,b,sub);
 printf("Multiplication of %d(a) and %d(b)=%d\n\n",a,b,multi);

 return 0;
}
void calc(int a,int b,int *add,int *sub,int *multi)
{
 *add=a+b;
 *sub=a-b;
 *multi=a*b;

}
