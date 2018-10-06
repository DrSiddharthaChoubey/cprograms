#include<stdio.h>
int main()
{
int i;
printf("\nenter number");
scanf("%d",&i); 
switch(1)
{
case 1:
     if(i%2==0)  
        printf(" %d is even number",i);
     else
        printf(" %d is odd number",i);
    break;
default:
   break;
}
 return 0;
}

