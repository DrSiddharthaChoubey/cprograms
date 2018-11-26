#include<stdio.h>
int main()
{
int i;
struct student {
int rollno;
char name[10];
int marks[i];
}s1,s2;
printf("enter 1st student record:");
printf("enter rollno=");
scanf("%d",&s1.rollno);
printf("enter name");
scanf("%s",s1.name);
printf("enter 5 subject marks:");
for(i=0;i<5;i++)
scanf("%d",&s1.marks[i]);

printf("enter 2nd student record:");
printf("enter rollno=");
scanf("%d",&s2.rollno);
printf("enter name");
scanf("%s",s2.name);
printf("enter 5 subject marks:");
for(i=0;i<5;i++)
scanf("%d",&s2.marks[i]);


printf("\n student record=");
for(i=0;i<5;i++)
{
printf("\n%d %s%d",s1.rollno,s1.name,s1.marks[i]);
printf("\n%d %s%d",s2.rollno,s2.name,s2.marks[i]);
}
return 0;
}

































