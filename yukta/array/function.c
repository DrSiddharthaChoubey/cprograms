#include<stdio.h>
void show(int arr[][4],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("\t%d",arr[i][j]);
printf("\n");
}}
void display(int (*arr)[4],int r,int c)
{
int *p,i,j;
for(i=0;i<r;i++)
{
p=arr+i;
for(j=0;j<c;j++)
printf("\t%d",*(p+j));
printf("\n");
}

}
int main()
{
int a[3][4]={2,4,6,1,7,8,9,12,10,11,13,3};
show(a,3,4);
display(a,3,4);
return 0;
}


