#include<stdio.h>
int main(){
int i,j,n;
scanf("%d",&n);
for(i=2;i<n;i++){
for(j=2;j<=(i/2);j++){
if (i==2){
printf("%d id a prime no.",i);
break;
}
else{
if (i%j==0){
printf("\n%d id a prime no.",i);
break;}
else{
printf("\n%d id a not prime no.",i);
break;}

}
}


}return 0;
}

