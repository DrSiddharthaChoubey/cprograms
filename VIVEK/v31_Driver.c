#include<stdio.h>
int main(){
int age;
char ms,gender;
printf("Enter age, Maritial Status , gender ");
scanf("%d %c %c",&age,&ms,&gender);
if(ms=='m'){
printf("Driver Insured");}
else{
if(gender=='m'&&age>=30){
printf("Driver Insured");
}
else if(gender=='f'&&age>=25){
printf("Driver Insured");
}
else if(gender=='m'&&age<30){
printf("Driver Not Insured");
}
else if(gender=='f'&&age<25){
printf("Driver Insured");
}}

}


