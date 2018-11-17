#include<stdio.h>
int main()
{
 int i,n1=0,n2=1,n3,term;
 printf("Enter the number of terms=");
 scanf("%d",&term);

 printf("%d\t",n1);
 printf("%d\t",n2);

 i=3;

 while(i<=term)
 {
  n3=n1+n2;
  n1=n2;
  n2=n3;
  printf("%d\t",n3);
  i++;
 }
 printf("\n");

 return 0;
}
