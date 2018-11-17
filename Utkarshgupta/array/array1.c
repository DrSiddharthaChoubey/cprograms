#include<stdio.h>
int main(){
int a[5],i,odd=0,eve=0;
for(i=0;i<5;i++){
scanf("%d",&a[i]);
if (a[i]%2==0)
eve+=a[i];
else
odd+=a[i];
}
printf("\todd=%d\teve=%d\n",odd,eve);
}

