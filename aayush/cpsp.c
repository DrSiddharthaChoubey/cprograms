#include <stdio.h>
int main ()
{
	int  cp ,sp;


	printf ("enter cost price");
	scanf ("%d",&cp);

	
	printf ("enter selling price");
	scanf ("%d",&sp);

	if (cp>sp)
	{ printf ("loss is of rs %d", cp-sp);}

	else if (sp>cp)
	{ printf ("profit of rs %d", sp-cp);}

	else 
	{ printf ("no profit no loss");}


return 0;
}

