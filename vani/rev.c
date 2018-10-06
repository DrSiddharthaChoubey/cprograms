#include<stdio.h>

int main()
{
int a,n,rev=0,ni;

printf("enter the 5-digitno");
scanf("%d",&n);
ni=n;
a=n%10;
rev=rev*10+a;
n=n/10;
a=n%10;
rev=rev*10+a;
n=n/10;
a=n%10;
rev=rev*10+a;
n=n/10
;
a=n%10;
rev=rev*10+a;
n=n/10;
a=n%10;
rev=rev*10+a;
n=n/10;
a=n%10;
//rev=rev*10+a;
printf("%d",rev);
if(ni==rev)
printf("they are same");
else
printf("\n they are differnt");
return 0;

}

