#include <stdio.h>
int main ()
{

int age;
char sex,ms;

printf ("enter age , sex and maritial status");
scanf ("%d %c %c", &age,&sex,&ms);

if (sex=='m'&&age>=30&&ms=='u')
{printf ("insured");}

else if (sex=='f'&&age>=25&&ms=='u')
{printf ("insured");}

else if (ms=='m')
{printf ("insured");}

else
{printf ("un insured");}

return 0;
}
