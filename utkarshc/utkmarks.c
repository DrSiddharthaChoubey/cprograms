#include<stdio.h>
int main(){
float mat,phy,chem,tot;
tot=mat+phy+chem;
printf("enter marks");
scanf("\n%f\n%f\n%f",&mat,&phy,&chem);
if ((mat>=60 && phy>=50 && chem>=40) ||(tot>=200) || (mat+phy)>=150)
printf("yes");
else
printf("no");

return 0;}




