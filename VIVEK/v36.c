#include<stdio.h>
int main(){
float sal;
printf("enter salary");
scanf("%f",&sal);
((sal>40000)&&(sal<25000))?printf("Manager"):((sal>25000)&&(sal<15000))?printf("Accountant"):printf("cleark");
}
