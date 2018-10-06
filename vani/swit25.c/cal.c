#include<stdio.h>
#include<stdlib.h>
int main()
{ int a,b,n,cho;

printf("\n\t 1.do you want to perform addition"); 
printf("\n\t 2.do you want to perform subtration"); 
printf("\n\t 3.do you want to perform multiplication"); 
printf("\n\t 4.do you want to perform division"); 
printf("\n\t enter the you choice");
printf("\t\t for invalid option you will be exit from program");
scanf("%d",&cho);
switch(cho)
{
case 1:
printf("\n\t enter the no. a and b");
scanf("%d%d",&a,&b);
n=a+b;
printf("\n\t\taddition of two no=%d",n);
break;

case 2:
printf("\n\t enter the no. a and b");
scanf("%d%d",&a,&b);
n=a-b;
printf("\n\t\tsubration of two no=%d",n);
break;

case 3:
printf("\n\t enter the no. a and b");
scanf("%d%d",&a,&b);
n=a*b;
printf("\n\t\tmultipication of two no=%d",n);
break;

case 4:
printf("\n\t enter the no. a and b");
scanf("%d%d",&a,&b);
n=a/b;
printf("\n\t\tdivision of two no=%d",n);
break;
default:
//printf("invalid choise")
exit(0);
}
return 0;
}
