#include<stdio.h>
 void add();
 int main()
{

printf("adittion of two numbers\n");

add();

return 0;

}

 void add()

 {

        int a,b,c;
        

        printf("enter the two numbers\n");
        scanf("%d%d",&a,&b);
        

       c=a+b;
       printf("sum=%d",c);
       

  }
