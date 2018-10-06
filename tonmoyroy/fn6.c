#include<stdio.h>
int power(int a,int b){
int i,s=1;
for(i=0;i<b;i++){
s=s*a;
}
return s;
}
int main(){
int a,b,c;
printf("enetr a&b")
scanf("%d%d",&a,&b)
c=power(a,b);
printf("%d",c)
return 0;
}
