#include<stdio.h>
int main()
{
int cp,sp,p,l;
printf("enter the sp and cp:");
scanf("%d%d",&sp,&cp);
p=sp-cp;
l=cp-sp;
if(p>0)
printf("profit of rs%d\n",p);

else
if(l>0)

printf("loss of rs%d\n",l);
else
if(p==0)
printf("neither pro nor loss");

return 0;
}

