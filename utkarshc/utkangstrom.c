#include<stdio.h>
int main()
{ int suma=0,n,m,cube;
	printf(" entr a no \n");
	scanf("%d",&n);
m=n;

  	while(m!=0)
	{ cube=m%10;
	   suma+=(cube*cube*cube);
	   m=m/10;} 
if (suma==n){
printf(" n=%d is angstrom no.",n);}
else
printf(" n=%d is not angstrom no.",n);
return 0;
}
