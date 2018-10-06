#include<stdio.h>
int power(int,int);
float fact(int);
int main()
{
int term,i;
float sum=0.0;
printf("enter the value of a andb");
scanf("%d%d",&term,&i);
i=1;
while(i<=term)
	{ 
sum=sum+power(i,2)/fact(i);
i++;
}
printf("sum=%f",sum);
return 0;
}
int power(int a,int b)
{ 
int i,p=1;
for(i=1;i<=b;i++)
p=p*a;
return (p);
}
float fact(int  n)
{int i,f=1;
for(i=1;i<=n;i++)
f=f*i;
return(f);
}

