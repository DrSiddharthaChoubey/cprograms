#include<stdio.h>
int main()
{
 int s1,s2,s3;
 printf("Enter the value of first side of triangle=");
 scanf("%d",&s1);
 printf("Enter the value of second side of triangle=");
 scanf("%d",&s2);
 printf("Enter the value of third side of triangle=");
 scanf("%d",&s3);

 if(s1==s2 && s2==s3)
 printf("\n\tTriangle is equilateral.\n");

 else if(s1==s2 || s2==s3 || s1==s3)
 printf("\n\tTriangle is isosceles.\n");

 else if(s1!=s2 && s2!=s3 && s1!=s3)
 printf("\n\tTriangle is scalene.\n");

 return 0;
}
