#include <stdio.h>
int main ()
{

int a=1,n=100,sum=0;

//printf ("enter n");
//scanf ("%d",&n);


while (a<=n)
{if (a%2==0){

	//printf ("\n %d",a);
sum=sum+a;

	a=a+1;}else{a=a+1;}

}
printf("%d",sum);

return 0;
}
