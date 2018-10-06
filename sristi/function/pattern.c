#include<stdio.h>
int pattern(int);
int main()
{
 int n,i,p;
 printf("Enter the number of rows and columns=");
 scanf("%d",n);

 p=pattern(n);
 printf("%d",p);

 return 0;
}
int pattern(int x)
{
 int i,j,n;

 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  printf("*");
  printf("\n");
 }
}
