#include<stdio.h>
int main()
{
 int a[10],i,e=0,o=0,s1=0,s2=0;
 printf("Enter the elements of array--->\n");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);

 for(i=0;i<10;i++)
 {
  if(a[i]%2==0)
  s1=s1+a[i];

  else
  s2=s2+a[i];
 }
 printf("Sum of all entered even numbers=%d\n",s1); 
 printf("Sum of all entered odd numbers=%d\n",s2); 

 return 0;
}
