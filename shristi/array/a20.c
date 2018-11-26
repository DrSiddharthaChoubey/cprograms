#include<stdio.h>
int main()
{
int a[3][4]={2,3,4,5,6,7,8,9,0,1,1,2};
show(a,3,4);
display(a,3,4);
put(a,3,4);
return 0;
}
void show (int arr[][4],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("\t%d",arr[i][j]);
printf("\n");
}
}
void display (int(*arr)[4],int r,int c)
{
int *p,i,j;
for(i=0;i<r;i++)
{ 
p=arr+i; 
for(j=0;j<c;j++)
printf("\t%d",*(p+i));
printf("\n");
}
}
void put(int *arr,int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{  
for(j=0;j<c;j++)
printf("\t%d",*(arr+i*c+j));
printf("\n");
}
}



































