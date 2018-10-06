#include<stdio.h>
int main()
{ int a,count=0,count1=0,count2=0;
  char ans='y';
 while(ans=='y' || ans=='Y')
{   
  printf("enter a number");
   scanf("%d",&a);
  if(a==0)
  {
    count++;
  }
  if(a>0)
  {
    count1++;
  }
  if(a<0)
   {
    count2++;
  }
  printf("\ndo you want to input more");
  scanf(" %c",&ans);
}
  printf("\nno. of zeroes enter %d",count);
  printf("\nno. of positives enter %d",count1);
  printf("\nno. of negatives enter %d",count2);
return 0;
}
