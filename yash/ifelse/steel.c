#include<stdio.h>
int main()
{
 float h,c,t;
 printf("Enter the value of hardness=");
 scanf("%f",&h);
 printf("Enter the value of carbon content=");
 scanf("%f",&c);
 printf("Enter the value of tensile strength=");
 scanf("%f",&t);

 printf("\n\n\t\t-:CONDITION FOR GRADING THE STEEL:-\n\n");
 printf("\t(i)Hardness must be greater than 50\n");
 printf("\t(ii)Carbon content must be less than 0.7\n");
 printf("\t(iii)Tensile strength must be greater than 5600\n\n\n");

 if(h>=50 && c<=0.7 && t>=5600)
 printf("Since all the conditions are met,therefore steel is of grade 10.\n");

 else if(h>=50 && c<=0.7)
 printf("Since conditions (i) and (ii) are met, therefore steel is of grade 9.\n");

 else if(c<=0.7 && t>=5600)
 printf("Since conditions (ii) and (iii) are met, therefore steel is of grade 8.\n");

 else if(h>=50 && t>=5600)
 printf("Since conditions (i) and (iii) are met, therefore steel is of grade 7.\n");

 else if(h>=50 || c<=0.7 || t>=5600)
 printf("Since only one condition is met, therefore steel is of grade 6.\n");

 else
 printf("Since none of the condition are met, therefore steel is of grade 5.\n");

 return 0;
}
