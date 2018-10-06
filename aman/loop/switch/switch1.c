#include<stdio.h>
int main()
{
char ch;
printf("enter the alphabet");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'A':
printf("its vowel");
break;
case 'e':
case 'E':
printf("its vowel");
break;
case 'i':
case 'I':
printf("its vowel");
break;
case 'o':
case 'O':
printf("its vowel");
break;
case 'u':
case 'U':
printf("its vowel");
break;
default:
printf("its consonant");
}
return 0;
}

