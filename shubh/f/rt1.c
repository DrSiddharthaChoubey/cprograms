#include<stdio.h>
void rt1(int);
int main()
{int n;
printf("Enter no. of lines");
scanf("%d",&n);
rt1(n);
}
void rt1(int n)
{int i,j;
for(i=1;i<=n;i++)
	{for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
}
}
