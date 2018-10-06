#include<stdio.h>
#include<stdlib.h>
int main()
{
int ch,fact=1,n,m,i,sum=0;
while(1){
printf("\n\t menu");
printf("\n\t1 factorial");
printf("\n\t2 prime");
printf("\n\t3 odd even");
printf("\n\t4 exit\n\n");
printf("enter a choice\n");
scanf("%d",&ch);


switch(ch){
case 1:
printf("enter a no\n");
scanf("%d",&n);
m=n;
while(n>0){
fact*=n;
n-=1;}
printf("factorial of number%d=%d",m,fact);
break;//case 1 ends

case 2:
printf("enter a no\n");
scanf("%d",&n);																																									
for(i=2;i<=n/2;i++){
   if (n==2){
    printf("2 is a prime no\n");
    break;}
   else if  (n%i==0)
    sum++;
}
if(sum>0)
printf("%d is a composite no.\n",n);
else
printf("%d is a prime no.\n",n);
continue;// case 2 ends
case 3:
printf("enter a no\n");
scanf("%d",&n);	
if (n%2==0)
printf("%d is even",n);
else
printf("%d is odd",n);
break;//case3 ends

default:
printf("exitting\n");
exit(0);
} 
}                                      //switch end
return 0;}                               //loop end

