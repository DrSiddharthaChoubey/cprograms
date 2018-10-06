#include<stdio.h>
#include<time.h>
int main()
{
time_t start,end;
double &time;
time(&start);
int sp,cp,p;

printf("enter the value of selling and cost price");
scanf("%d%d",&sp,&cp);
p=sp-cp;
if(p>0)
printf("you have a profit=%d",p);
if(p<0)
printf("you have a loss=%d",p);
if(p==0)
printf("nor profit or loss");

time(&end);
time=(double)(end-start);
printf("%lf",time);
return 0;
}
