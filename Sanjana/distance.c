#include<stdio.h>
int main()
{
float km,m,cm,inch,feet;
printf ("enter the distance in km");
scanf ("%f",&km);
m=km*1000;
cm=m*100;
inch=cm/2.54;
feet=inch/12;
printf ("\ndistance in kilometer=%f",km);
printf ("\ndistance in meter=%f",m);
printf ("\ndistance in centimeter=%f",cm);
printf ("\ndistance in inch=%f",inch);
printf ("\ndistance in feet=%f\n",feet);
return 0;
}
