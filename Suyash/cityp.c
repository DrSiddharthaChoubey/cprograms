#include<stdio.h>

int main()
{
int tpop=80000,tm,tw,tl,tlm,tlw,im,iw;

printf("\nTotal population of the city is : %d",tpop);

	tm=0.52*tpop;
	tw=tpop-tm;
	tl=0.48*tpop;
	tlm=0.35*tl;
	tlw=tl-tlm;
	im=tm-tlm;
	iw=tw-tlw;

printf("\nTotal illitrate men & women are rep. : %d %d\n",im,iw);

return 0;
}
