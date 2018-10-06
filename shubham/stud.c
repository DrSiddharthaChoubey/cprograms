#include<stdio.h>
int main()
{
int n,p,sum=0;

printf("five digit number=n");
scanf("%d",&n);
p=n%10+1;
n=n/10;
sum=p*10000+sum;
p=n%10+1;
n=n/10;
sum=p*1000+sum;
p=n%10+1;
n=n/10;
sum=p*100+sum;
p=n%10+1;
n=n/10;
sum=p*10+sum;
p=n%10+1;
sum=p*1+sum;


printf("swapping number=%d",sum);

return 0;
}
