#include<stdio.h>

int main(){
int pos=0,i,neg=0,zero=0,n;
char c='y';
while(c=='y'||c=='Y'){
printf("enter a no.");
scanf("%d",&n);
if(n>0){
pos++;
}
if(n<0){
neg++;
}
if(n==0){
zero++;
printf("press Y or y to continue");
scanf("%c",&c);
}
printf(" positive no:%d",pos);
printf(" negative no:%d",neg);
printf(" no of zero=%d",zero);

return 0;
}

