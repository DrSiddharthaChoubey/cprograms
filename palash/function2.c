#include<stdio.h>
int is_prime(int x)
{ int flag=0;
  for(int i=2;i<=x/2;++i)
   { if(x%i==0)
       {  flag=1; 
            break;
       }
   }
  if(x==1)
   {printf("neither prime nor composite");
   }
  else
    { if(flag==0)
        {printf("it is a prime number:");
         }
      else
        {printf("it is a composite number:");
        }
    }
return 0;
}
int main()
{ int n;
  scanf("%d",&n);  
  is_prime(n);
 return 0;
} 

