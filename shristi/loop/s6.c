#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,p,j,sum,diff,n;
float div;
while(1)
{
printf("\t\t MENU");
printf("\n\t ADDITION");
printf("\n\t SUBSTRACTION");
printf("\n\t MULTIPLICATION");
printf("\n\t DIVISION");
printf("\n\t EXIT");
printf("\n enter any number");
scanf("%d",&n);

switch(n)
{
case 1:
printf("\n enter the value of i,j");
scanf("%d%d",&i,&j);
sum=i+j;
printf("sum=%d",sum);
break;
case 2:
printf("\n enter the value of i,j");
scanf("%d%d",&i,&j);
diff=i-j;
printf("diff=%d",diff);
break;
case 3:
printf("\n enter the value of i,j");
scanf("%d%d",&i,&j);
p=i*j;
printf("product is:%d",p);
break;
case 4:
printf("\n enter the value of i,j");
scanf("%d%d",&i,&j);
div=i/(float)j;
printf("div=%f",div);
break;
default:
printf("invalid option");
exit(0);
}
}
return 0;
}












