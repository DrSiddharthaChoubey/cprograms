#include<studio.h>
void country();
void capital(char a[]);
void main()
{
country();
}
void country()
{
char name[20];
printf("%[^\n]s",name);
capital(name);
}
void capital(char n[])
{
char cap[20];
printf("\n enter the capital of %s",n);
scanf("%[^\n]s",cap);
printf("\n country %s having capital is %s",n,cap);
}

