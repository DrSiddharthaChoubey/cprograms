#include<stdio.h>
int pattern();
int main()
{
 int p,q;

 p=pattern(q);

 return 0;
}

int pattern(int x)
{
 int i,j,n;
 printf("Enter the number of rows and columns=");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  printf("*");

  printf("\n");
 }
}
