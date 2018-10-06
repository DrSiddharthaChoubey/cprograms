#include<stdio.h>
int isprime(int n){
int i,suma=0;
if (n==2)
return 2;
else{
for(i=2;i<=(n/2);i++)
{
if (n%i==0)
suma+=1;
}
if (suma>0)
return 1;
else
return 0;}
}
int main(){
int n,a;
printf("enter a no.");
scanf("%d",&n);
a=isprime(n);
if(a==1)
printf("\n%d is a compositeno.",n);
else if(a==0)
printf("\n%d is a prime no.",n);
else
printf("\n%d is a prime no.",n);

}


