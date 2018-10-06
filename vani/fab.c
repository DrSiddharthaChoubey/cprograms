#include<stdio.h>
int main()
{
int i,n1=0,n2=1,n3,ter;
printf("\nenter the term =");
scanf("%d",&ter);
printf("\n %d \n %d",n1,n2);

i=3;
			while(i<ter)
				{
				n3=n1+n2;
				n1=n2;
				n2=n3;
				
				printf("\n %d\n",n3);
i++;}

return 0;
}
				
