#include<stdio.h>
int main()
{
 int a[10],i,e=0,o=0;
 printf("Enter the elements of array--->\n");

 for(i=0;i<10;i++)
 scanf("%d",&a[i]);

 for(i=0;i<10;i++)
 {
  if(a[i]%2==0)
  e++;
  else
  o++;
 }
 printf("\n\n\tAmount of entered all even numbers=%d\n",e);
 printf("\n\n\tAmount of entered all odd numbers=%d\n",o);

 return 0;
}
