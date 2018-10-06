#include<stdio.h>

int main()
{
int a,b,x,ch;

printf("\nEnter a : ");
	scanf("%d",&a);

printf("\nEnter b : ");
	scanf("%d",&b);

printf("\nCALULATOR CHOICES :- ");
printf("\nENTER 1 FOR ADDITION");
printf("\nENTER 2 FOR SUBTRACTION ");
printf("\nENTER 3 FOR MULTIPLICATION");
printf("\nENTER 4 FOR DIVISION ");
printf("\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : printf("\n!!!ADDITION!!!");
					x=a+b;
					printf("\nResult : %d",x);
					break;
		case 2 : printf("\n!!!SUBTRACTION!!!");
					x=a-b;
					printf("\nResult : %d",x);
					break;
		case 3 : printf("\n!!!MULTIPLICATION!!!");
					x=a*b;
					printf("\nResult : %d",x);
					break;
		case 4 : printf("\n!!!DIVISION!!!");
					x=a/b;
					printf("\nResult : %d",x);
					break;
		default : printf("\n!!WRONG CHOICE!!");
	}
printf("\n");
return 0;
}
