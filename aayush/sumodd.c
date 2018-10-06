#include <stdio.h>
int main ()
{

int a=1,n=5,sum=0;

//printf ("enter n");
//scanf ("%d",&n);


while (a<=n)
{if (a%2==0){

	//printf ("\n %d",a);
a=a+1;

}else{
sum=sum+a;a=a+1;}

}
printf("%d",sum);

return 0;
}
