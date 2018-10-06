/*write a program to print fibonacci series*/
#include<stdio.h>
int main()
{
int i,n1=0,n2=1,n3,term;
printf("enter the no of terms");
scanf("%d",&term);
printf("%d\t%d",n1,n2);
i=3;
while(i<=term)
{
n3=n1+n2;
n1=n2;
n2=n3;
printf("\t%d",n3);
i++;
}
return 0;
}


