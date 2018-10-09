#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of 3 no.s\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("\ngreatest no. is :%d",a);
else if(b>c)
printf("greatest no. is :%d",b);
else
printf("greatest no. is :%d",c);
return 0;
}
