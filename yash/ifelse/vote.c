#include<stdio.h>
int main()
{
 int age;
 printf("Enter the age=");
 scanf("%d",&age);

 if(age>=18)
 {
  printf("You can vote\n");
  printf("Go for it\n");
 }

 else
 {
  printf("You cannot vote\n");
  printf("Get lost\n");
 }

 return 0;
}
