#include<stdio.h>
int main()
{ 
int i,k,j,n,p;
float fi,sum=0;
printf("enter the ser");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
fi=1; p=1;
for(j=1;j<=i;j++)
fi=fi*j;
for(k=1;k<=2;k++)
p=p*i;
if(i%2==1)
sum=sum-p/fi;
else
sum=sum+p/fi;
}
printf("%f",sum);
return 0;
}

