#include<stdio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if (ch>=65&&ch<=90)
printf("capital letter A-Z");
else if(ch>=95&&ch<=122)
printf("small case letter a-z");
else if(ch>=48&&ch<=57)
printf("a digit 0-9");
else
printf("a special symbol");
return 0;
}
