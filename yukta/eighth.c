#include<stdio.h>
int main()
{
int noh,not,nof,amt;
printf("ener the ammount");
scanf("%d",&amt);
noh=amt/100;
amt=amt%100;
not=amt/50;
amt=amt%50;
nof=amt%10;
printf("no of hundered currency=%d",noh);
printf("no of fifty currency=%d",nof);
printf("no of ten currency=%d",not);
return 0;
}


