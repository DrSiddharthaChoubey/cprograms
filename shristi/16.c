#include<stdio.h>
int main()
{
char ch;
printf("enter character");
scanf("%c",&ch);
if(ch>=65&&ch<=90)
printf(" %cS is upper case",ch);
else if(ch>=97&&ch<=122)
printf(" %c is lower case",ch);
else if(ch>=48&&ch<=57)
printf(" %c is digit",ch);
else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
printf(" %c is special character",ch);
return 0;
}
