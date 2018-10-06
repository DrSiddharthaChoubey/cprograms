#include<stdio.h>
int main()
{int days;
printf("enter the number of days:");
scanf("%d",&days);
if(days>=1&&days<=5)
{printf("fine=%-5.1f",days*.5);
}
if(days>=6&&days<=10)
{printf("fine=%d",days*1);
}
if(days>11&&days<=30)
{printf("fine=%d",days*5);
}
if(days>30)
{printf("your membership is cancelled:");
}
return 0;
} 
