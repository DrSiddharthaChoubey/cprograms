#include<stdio.h>
  int main()
{
   char ans='y';
   int num,zero=0,pos=0,neg=0,ans=y;
   while(y==0||Y==0)
   {
      printf("Eneter any number = ");
       scanf("%d",&num);
       if(num>0)
           pos++;
         if(num==0)
              zero++;
         if(num<0)
                 neg++;
    printf("\n Do you want more input=");
    scanf("  %c",&ans);
  }
   printf("\n Positive no = %d",pos);
  printf("\n negative no= %d ",neg);
   printf("\n zero no = %d ",zero);
return 0;
}
