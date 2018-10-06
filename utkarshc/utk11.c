#include<stdio.h>
int main(){
int a,b,c;
scanf("\n%d\n%d\n%d",&a,&b,&c);
if (a*a==((b*b)+(c*c)) || b*b==((a*a)+(c*c)) || c*c==((b*b)+(a*a)) )
printf("YES");
else
printf("NO");
return 0;}
