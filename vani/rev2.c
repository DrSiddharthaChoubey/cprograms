#include<stdio.h>
int main()
{
int n,rev=0,n1,a;
printf("\nenter the no. =");
scanf("%d",&n);
n1=n;
			while(n1>0)
				{
				a=n1%10;
rev=a+rev*10;
n1=n1/10;
			
		if(rev==n)
printf("it is revsable");
else
printf("it is not re");
}
return 0;
}
				
