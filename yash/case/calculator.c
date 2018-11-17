#include<stdio.h>
#include<stdlib.h>
int main()
{
 int add=0,sub=0,multi=1,fact=1,choice,i,a,b,n;
 float div=1;

 while(i)
 {
  printf("\t\t-:CALCULATOR:-\n\n");
  printf("\t 1. Addition\n");
  printf("\t 2. Subtraction\n");
  printf("\t 3. Multiplication\n");
  printf("\t 4. Division\n");
  printf("\t 5. Factorial\n");
  printf("\t 6. Exit\n\n\n");
  printf("\t\tEnter your choice=");
  scanf("%d",&choice);

  switch(choice)
  {
   case 1:

   printf("\n\n\t\t-:ADDITION:-\n\n");
   printf("\tEnter the value of a=");
   scanf("%d",&a);
   printf("\tEnter the value of b=");
   scanf("%d",&b);

   add=a+b;
   printf("\tAddition of %d(a) and %d(b)=%d\n\n",a,b,add);
   break;

   case 2:

   printf("\n\n\t\t-:SUBTRACTION:-\n\n");
   printf("\tEnter the value of a=");
   scanf("%d",&a);
   printf("\tEnter the value of b=");
   scanf("%d",&b);

   sub=a-b;
   printf("\tSubtraction of %d(a) and %d(b)=%d\n\n",a,b,sub);
   break;

   case 3:

   printf("\n\n\t\t-:MULTIPLICATION:-\n\n");
   printf("\tEnter the value of a=");
   scanf("%d",&a);
   printf("\tEnter the value of b=");
   scanf("%d",&b);

   multi=a*b;
   printf("\tMultiplication of %d(a) and %d(b)=%d\n\n",a,b,multi);
   break;

   case 4:

   printf("\n\n\t\t-:DIVISION:-\n\n");
   printf("\tEnter the value of a=");
   scanf("%d",&a);
   printf("\tEnter the value of b=");
   scanf("%d",&b);

   div=(float)a/(float)b;
   printf("\tDivision of %d(a) to %d(b)=%.3f\n\n",a,b,div);
   break;

   case 5:

    printf("\n\n\t\t-:Factorial of a number:-\n\n");

    fact=1;
    printf("\tEnter the number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("\tFactorial of number %d=%d\n\n",n,fact);
    break;

    case 6:

    exit(0);

    default:

    printf("Ivalid opton\n\n");
   }
  }

 return 0;
}
