#include<stdio.h>
int main()
{
 char ch;
 printf("Enter the character=");
 scanf("%c",&ch);

 if(ch>=65 && ch<=90)
 printf("Capital letter A-Z\n");

 else if(ch>=95 && ch<=122)
 printf("Small letter a-z\n");

 else if(ch>=48 && ch<=57)
 printf("A digit from 0-9\n");

 else
 printf("A special symbol\n");

 return 0;
}
