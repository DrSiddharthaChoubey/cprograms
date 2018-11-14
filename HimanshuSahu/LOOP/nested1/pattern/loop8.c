// series [(1^1)/1!] + [(2^2)/2!] + [(3^3)/3!] + [(4^4)/4!] + [(5^5)/5!] + ... + [(n^n)/n!] 

#include<stdio.h>
int main()
{
 float sum = 0;
int i,k,j,p,f,term;
printf(" enter the terms");
scanf("%d",&term);
for(i=1; i<=term; i++)
 	{   
		p=1; f=1;
	
           for(j=1; j<=i; j++)
		f=f*j;
	for(j=1; j<=2; j++)
		p=p*i;

        if(i%2!=0)
  		sum=sum + p/(float)f;
	else 
		sum=sum - p/(float)f;


	}
printf("sum of series = %f",sum);


return 0; 
} 
