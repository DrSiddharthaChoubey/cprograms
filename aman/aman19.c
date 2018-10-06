#include<stdio.h>
int main()
{
int a;
char s,ms,m;
printf("enter the age & specify gender and maritial status=");
scanf("%d %c %c",&a,&s,&ms);
if(ms=='m'&&s=='m')
printf("u r insured");
else if(ms=='u'&&s=='m'&&a>35)
printf("u r insured");
else if(ms=='u'&&s=='f'&&a>25)
printf("u r insured");
else
printf("u r not insured");
return 0;
}
