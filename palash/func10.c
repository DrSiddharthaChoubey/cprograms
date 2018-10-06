#incldue<stdio.h>
int fact(int n)
{ int i,f=1;
  for(i=0;i<=n;i++)
     f=f*1;
 printf("%d",n);
return 0;
}
int power(int n)
{int p=1;
 for9int j=0;j<=n;j++)
    p=p*n;
 printf("%d",p);
 return 0;
}
int main()
{ int n,k;
scanf("%d",&n);
for(k=1;k<=n;k++)
  s=s+power(k)/fact(k);
printf("%f",s);
return 0;
}
