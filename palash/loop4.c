/*count number of digits in a number*/
#include<stdio.h>
int main()
{long long n;
int count=0,d,sum=0;
scanf("%lld",&n);
while(n!=0)
{n/=10;
 d=n%10;
sum=sum+d;
 ++count;

}
printf("%d\t",count);
printf("%d",sum);
return 0;
}
