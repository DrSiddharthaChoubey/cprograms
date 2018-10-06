#include<stdio.h>
int main()
{int m1,m2,m3,m4,m5,p;
printf("enter the marks of the 5 subjects:");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
p=(m1+m2+m3+m4+m5)/5;
if(p>=60)
{printf("first division");
}
else if(p>=50&&p<=59)
{printf("second division");
}
else if(p>=33&&p<=59)
{printf("third division");
}
else
{ printf("fail");
}
return 0;
}

