#include<stdio.h>
int main()
{
int C,D,temp;
printf("enter the value of C and D");
scanf("%d%d"&C,&D");
temp=C;
C=D;
D=temp;
printf("after swapping C=%d,D=%d",C,D);
return0;
}
