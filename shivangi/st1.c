#include<stdio.h>
int main()
{
int i;
struct student 
{
int rollno;
char name[10];
int marks[5];
}s1,s2;
printf("enter first student record");
printf("\nenter roll no.");
scanf("%d ",&s1.rollno);
printf("enter name");
scanf("%s",s1.name);
printf("enter five subject marks");
for(i=0;i<5;i++)
scanf("%d",&s1.marks[i]);



printf("enter second student record");
printf("enter roll no.");
scanf("%d ",&s2.rollno);
printf("enter name");
scanf("%s",s2.name);
printf("enter five subject marks");
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

