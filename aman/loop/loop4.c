/*wap to printprint all even nos. from 1-100 using while loop*/
#include<stdio.h>
int main()
{
int i;
i=1;
while(i<=100)
{
if(i%2!==0)
printf("%d\t",i);
i++;
}
return 0;
}
