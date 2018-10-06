#include <stdio.h>

int main ()
{

char ch;

printf ("enter character");
scanf ("%c",&ch);

if (ch>=65&&ch<=90)
printf ("char is capital alooha");

else if (ch>=97&&ch<=122)
printf ("char is small alpha");

else if (ch>=48&&ch<=57)
printf ("char is numb");

else if( (ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
printf ("char is special char");


return 0;
}


