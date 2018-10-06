#include<stdio.h>
int main()
{
int c,d,temp;
printf("enter the value of cand d");
scanf("%d%d",&c,&d);
temp=c;
c=d;
d=temp;
printf("\nafter swapping c=%d,d=%d",c,d);
return 0;
}

