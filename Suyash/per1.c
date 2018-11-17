#include<stdio.h>

int main()
{

int m1,m2,m3,m4,m5,per;

printf("\nEnter marks for subject 1 : ");
	scanf("%d",&m1);

printf("\nEnter marks for subject 2 : ");
	scanf("%d",&m2);

printf("\nEnter marks for subject 3 : ");
	scanf("%d",&m3);

printf("\nEnter marks for subject 4 : ");
	scanf("%d",&m4);

printf("\nEnter marks for subject 5 : ");
	scanf("%d",&m5);


per=(m1+m2+m3+m4+m5)/5;

	if(per>=60)
		printf("\nFirst Division\n");

	else
	{
		if(per>=50)
			printf("\nSecond Division\n");
		else
		{
			if(per>=40)
				printf("\nThird Division\n");
			else
				printf("\nFail\n");
		}
	}

return 0;
}
