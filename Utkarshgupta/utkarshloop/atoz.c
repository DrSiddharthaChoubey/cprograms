#include <stdio.h>
int main()
{
   int  i=1,num,sod=0,sev=0;
   printf("Please enter a number: \n");
scanf("%d", &num);
   while (i<=num){
if (i%2==0){
sev+=i;
printf("%dis evenno\n",i);
i++;}
else{
sod+=i;
printf("%dis odd no\n",i);
i++;}
}
printf("%dis sum ofodd no\n",sod);
printf("%dis sum of even no\n",sev);
}
     
   
