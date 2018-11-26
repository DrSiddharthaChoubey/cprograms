#include<stdio.h>
int main()
{
int a,b,c,big;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
  {
    if(b>c)
     big=a;
    else
     big=c;   
  }
else
  {
    if(b>c)
     big=b;
    else
      big=c;
  }
printf("\n largest number is=%d",big);
return 0;
}
