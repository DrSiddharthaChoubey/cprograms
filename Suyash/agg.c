#include<stdio.h>

int main()
{
float m1,m2,m3,m4,m5,agg,perc,tot;

printf("\nEnter Marks obtained in subject 1 : ");
	scanf("%f",&m1);
printf("\nEnter Marks obtained in subject 2 : ");
	scanf("%f",&m2);
printf("\nEnter Marks obtained in subject 3 : ");
	scanf("%f",&m3);
printf("\nEnter Marks obtained in subject 4 : ");
	scanf("%f",&m4);
printf("\nEnter Marks obtained in subject 5 : ");
	scanf("%f",&m5);
	
	tot=(m1+m2+m3+m4+m5);
	agg=tot/5;	
	perc=tot/500*100;

printf("\nAggrigate =%3.2f Percent =%3.2f\n",agg,perc);
}
