#include<stdio.h>
int main()
{
int noh,not,nof,amt;
printf("enter the amount");
scanf("%d",&amt);
noh=amt/100;
amt=amt%100;
nof=amt/50;
amt=amt%50;
not=amt/10;
printf("\nno of hundred currency=%d",noh);
printf("\nno of fifty currency=%d",nof);
printf("\nno of tens =%d",not);
return 0;
}
