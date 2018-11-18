#include<stdio.h>
int main()
{
 int w,h;
 float bmi;
 printf("Enter the weight of the person=");
 scanf("%d",&w);
 printf("Enter the height of the person=");
 scanf("%d",&h);

 bmi=w/(float)(h*h);

 printf("\n\n\t\t-:BMI CATEGORY TABLE:-\n\n");
 printf("\t BMI CATEGORY\t\t\t\tBMI\n\n");
 printf("\t Starvation\t\t\t\t0-15\n");
 printf("\t Anorexic\t\t\t\t15.1-17.5\n");
 printf("\t Underweight\t\t\t\t17.6-18.5\n");
 printf("\t Ideal\t\t\t\t\t18.6-24.9\n");
 printf("\t Overweight\t\t\t\t25-29.9\n");
 printf("\t Obese\t\t\t\t\t30-30.9\n");
 printf("\t Morbidly Obese\t\t\t\t31 and above\n");

 if(bmi<15)
 printf("\n\n\t\tBMI category=Starvation\n");

 else if(bmi>=15.1 && bmi<17.5)
 printf("\n\n\t\tBMI category=Anorexic\n");

 else if(bmi>=17.6 && bmi<18.5)
 printf("\n\n\t\tBMI category=Underweight\n");

 else if(bmi>=18.6 && bmi<24.9)
 printf("\n\n\t\tBMI category=Ideal\n");

 else if(bmi>=25 && bmi<29.9)
 printf("\n\n\t\tBMI category=Overweight\n");

 else if(bmi>=30 && bmi<30.9)
 printf("\n\n\t\tBMI category=Obese\n");

 else if(bmi<=17.5)
 printf("\n\n\t\tBMI category=Morbidly Obese\n");

 return 0;
}
