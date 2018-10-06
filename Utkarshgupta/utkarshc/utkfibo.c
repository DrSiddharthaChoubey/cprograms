#include<stdio.h>
int main(){
long long int fir=0,sec=1,thir,term,i=2;
printf("enter no.");
scanf("%lld",&term);
printf("\n%lld",fir);
printf("\n%lld",sec);
while(i<=term){
thir=fir+sec;
printf("\n%lld\n",thir);
fir=sec;
sec=thir;
i++;
}
return 0;}
