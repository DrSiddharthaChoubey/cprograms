#include<stdio.h>
void country();
void capital(char a[]);
void main()
{
country();
}
void country()
{
char name[20];
printf("\n Enter the name of country");
scanf("%s",&name);
capital(name);
}
void capital(char n[])
{
char cap[20];
printf("\n Enter the capital of %s::",n);
scanf("%s", &cap);
printf("\n Country %s having capital is %s",n,cap);
}



