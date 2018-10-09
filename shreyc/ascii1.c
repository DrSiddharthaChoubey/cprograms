#include<stdio.h>
int main()

{
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>=65&&ch<=90)
	printf("capaital letters A-Z");
else if(ch>=97&&ch<=122)
	printf("small letter a-z");
else if(ch>=48&&ch<=57)
	printf("it is no.s");
else
	printf("the entered character is special symbol");
return 0;
}
