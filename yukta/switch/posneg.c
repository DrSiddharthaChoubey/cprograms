 #include<stdio.h>
int main()
{
int i;
printf("\nenter number");
scanf("%d",&i);
switch(1)
{
 case 1:
       if(i>0)
          printf("%d number is positive",i);
       else if (i<0)
          printf("%d number is negative",i);
       else
         printf("%d number is zero",i);
break;
}
return 0;
}

