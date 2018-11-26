#include<stdio.h>
int prime(int);
int main()
{
int n,i;
printf("enter the no .");
scanf("%d",&n);

if(prime(n))
  printf("no. is a prime no. %d",n);
 else
  printf("not a prime no. %d",n);

return 0;
}

int prime(int x)
{
int i;
i=2;
while(i<sx)
 {
  if(x%i==0)
   break;
   else
    i++;
  }
 if(i==x)
return 1;
else 
return 0;
}

