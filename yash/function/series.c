#include<stdio.h>
float factorial(int);
int power(int,int);
int main()
{
 int term,i;
 float sum=0.0;
 printf("Enter the number of terms=");
 scanf("%d",&term);

 i=1;

 while(i<=term)
 {
  sum=sum+power(i,2)/factorial(i);
  i++;
 }
 printf("Sum of series=%f\n\n",sum);

 return 0;
}

int power(int a,int b)
{
 int i=1,p=1;

 for(i=1;i<=b;i++)
 p=p*a;

 return (p);
}

float factorial(int n)
{
 int i=1,f=1;

 for(i=1;i<=n;i++)
 f=f*i;

 return (f);
}
