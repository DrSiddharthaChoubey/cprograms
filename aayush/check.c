#include <stdio.h>
int main()
{

	char ans='y';
	int num,zero=0,pos=0,neg=0;
while (ans=='y' || ans=='Y')
{
printf("\n enetr value");
scanf ("%d",&num);

if (num>0)
pos++;

if (num==0)
zero++;

if (num<0)
neg++;

printf("\n do u want to enter more");
scanf (" %c",&ans);

}
printf("\n %d pos",pos);
printf("\n %d neg",neg);
printf("\n %d zero",zero);
return 0;
}

