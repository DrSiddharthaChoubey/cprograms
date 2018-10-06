#include<stdio.h>
int main()
{ 
int c,d;
printf("enterTHE VALUE OS C D:");
scanf("%d%d",&c,&d);
c=c^d;
d=c^d;
c=c^d;

printf("c=%d\rd=%d",c,d);

return 0;
}
