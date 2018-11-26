#include<stdio.h>

int main()
{
char ch;

  
   printf("\n enter any character ");
   scanf("%c",&ch);
if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
  switch(ch)
  {
    case 'a':
  case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
  printf("vowels");
break;
default :
printf("consonant");
}
else printf("not an alphabet");
return 0;
}
       
