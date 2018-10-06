#include<stdio.h>
int main()
{
int a,b,c,sum,largest;
printf("the three sides of the triangle=");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is the largest=%d",a);
else
{
 if((b+c)>a)
  printf("it is a valid triangle1");
 else  
  printf("its not valid triangle");
}
if(b>c&&b>a) 
  printf("b is the largest=%d",b);
else
{
 if((c+a)>b)
  printf("it is a valid triangle11");
 else
  printf("its not a valid triangle");
}  
if(c>a&&c>b)
  printf("c is the largest=%d",c);    
else 
{
 if((a+b)>c)
  printf("it is a valid triangle111");
 else
  printf("its not a valid triangle");
}  
  
return 0;
}

