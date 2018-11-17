#include<stdio.h>
int main(){
int i,j;
int a[5][2]={1,2,3,4,5,6,7,8,9,10};
int (*p)[2],*p1;//ponter to array
p=a;
p1=p;
for(i=0;i<5;i++){
  p1=(int *)(p+i);
  for(j=0;j<2;j++)
    printf("%d\t",*(p1+j));
  printf("\n"); 
}    

}
