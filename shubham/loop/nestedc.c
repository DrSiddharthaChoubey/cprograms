#include<stdio.h>
int main()
{
int i,j,k,n,s;
printf("enetr the row");
scanf("%d",&n);
s=n;
for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
      printf(" ");
  for(k=1;k<=i;k++)
      printf("%d",s--);
printf("\n");
}

return 0;
}
