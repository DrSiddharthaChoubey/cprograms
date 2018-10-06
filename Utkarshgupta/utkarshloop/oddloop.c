#include<stdio.h>

int main(){
int n,pos=0,neg=0,zero=0;
char ch='y';
for(;ch=='y' || ch=='Y';){
printf("enter a no");
scanf("%d",&n);
if(n>0)
pos++;
else if(n<0)
neg++;
else
zero++;
printf("\nenter yes or no");
fgets("%c",&ch);
}
printf("entered no is pos=%d neg=%d zero=%d",pos,neg,zero);
}


