/*a to the power b*/
#include<stdio.h>
int main()
{int a,b,p=1;
scanf("%d%d",&a,&b);
for(int i=1;i<=b;i++)
 { for(int j=1;j<=a;j++)
   p=i*j;
 }
printf("%d",p);
return 0;
} 
