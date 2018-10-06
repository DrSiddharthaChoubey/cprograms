#include<stdio.h>
 int main()
{
char ch;
 printf("enter the alphabet\n\t");
 scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'A':
printf("its a vowel\n");
break;
case 'e':
case 'E':
printf("its a vowel\n"); 
break;
case 'i':
case 'I':
printf("its a vowel\n");
break;
case 'o':
case 'O':
printf("its a vowel\n"); 
break;
case 'u':
case 'U':
printf("its a vowel\n");
break;
default:
printf("its consonant\n");
}
return 0;
}

