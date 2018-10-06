#include<stdio.h>
int main()
{
char a;
printf("enter the character=");
scanf("%c",&a);
if(a>=65 && a<=90)
   printf("its the capital letter");
  else if(a>=97&&a<=122)
   printf("its in lower case");
  else if(a>=48&&a<=57)
   printf("its a digit");
  else if(a>=0&&a<=47||a>=58&&a<=64||a>=91&&a<=96||a>=123&&a<=127) 
   printf("its a special no");
return 0;
}
