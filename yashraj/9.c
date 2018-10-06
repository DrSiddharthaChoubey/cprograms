#include<stdio.h>
int main()
{

long int ml,fl,mil,fil,m,f,p,lit,illt;
m=80000*52/100;
lit=80000*48/100;
f=80000*48/100;
ml=80000*35/100;
fl=lit-ml;
illt=80000*52/100;
mil=m-ml;
fil=f-fl;

printf("no of men illiterate=%ld\nno of female illiterate=%ld\nml=%ld\nfl=%ld\nm=%ld\nf=%ld",mil,fil,ml,fl,m,f);
return 0;
}


