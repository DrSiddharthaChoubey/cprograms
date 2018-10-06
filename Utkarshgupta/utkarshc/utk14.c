#include<stdio.h>
int main()
{ int suma=0,m,i,cube;
	printf(" entr a no \n");
	//scanf("%d",&n);
for(i=1;i<=1000;i++){
m=i;
suma=0;
  	while(m!=0)
	{ cube=m%10;
	   suma+=(cube*cube*cube);
	   m=m/10;} 
if (suma==i)
printf(" n=%d is angstrom no.\n",i);
else
printf(" n=%d is not angstrom no.\n",i);
}
return 0;
}
