#include<stdio.h>
  int main()
{
  int i,term,n1=0,n2=1,n3;
  printf("Enter the number of terms");
  scanf("%d",&term);
  printf("n1=%d n2=%d",n1,n2);
  while(i<=term)
  {
     n3=n1+n2;
     n1=n2;
     n2=n3;
     printf("%d \t ",n3);
       i++;
   }
  return 0;
}
