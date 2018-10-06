#include<stdio.h>
int evenodd();
int main(){
int num,s;
printf("enter no.");
scanf("%d",&num);
s = evenodd(num);
if (s==1)
	printf("no. is even");
else
	printf("no. is odd");
return 0;
}

int evenodd(int num){
if(num%2==0)
	return 1;
else
	return 0;
}
