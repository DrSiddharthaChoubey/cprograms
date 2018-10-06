#include<stdio.h>
int main()
{
char a;
printf("write a character=");
scanf("%c",&a);
if(a>=65 && a<=90)
     printf("its capital letter");
 else if(a>=97&&a<=122)
      printf("its small case letter");
 else if(a>=48&&a<=57)
      printf("its digit");
 else if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
      printf("its special symbool");
return 0;
}

