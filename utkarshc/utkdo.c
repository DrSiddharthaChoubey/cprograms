
#include<stdio.h>
int main(){
long int n,sum=0;
printf("enter no.");
scanf("%ld",&n);
do{
sum+=(n%10);
}
while(n>0 && n<10){
n=n/10;
}

printf("%ld\n",sum);

return 0;
}







return 0;
}


