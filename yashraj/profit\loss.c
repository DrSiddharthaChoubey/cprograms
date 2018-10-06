#include<stdio.h>
int main()
{
int bs=3000,hra,da,con,inc,bo,s,in,gr;
printf("sales:");
scanf("%d",&s);
hra=20*bs/100;
da=110*bs/100;
con=500;

if(s>100000) 
{in=10*s/100;
bo=500;
gr=hra+da+bs+in+bo+con;
printf("incentive=%d",in);
printf("bonus=%d",bo);
printf("gross=%d",gr);
}

else
{in=5*s/100;
bo=500;
gr=hra+da+bs+in+bo+con;
printf("incentive=%d",in);
printf("bonus=%d",bo);
printf("gross=%d",gr);
}



return 0;
}
