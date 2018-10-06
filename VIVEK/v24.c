#include<stdio.h>
int main()
{ int n,m,rev=0;
  printf("\n enter a no. to reverse : ");
  scanf("%d",&n);
m=n;
  while(n!=0)
   { rev=rev*10;
     rev=rev+n%10;
     n=n/10;
   }
 printf("\n the reverse is : %d",rev);
if(rev == m){
printf("Its a palindrom number");
}
else{
printf("Its not a palindrom number%d",m);
}

}

