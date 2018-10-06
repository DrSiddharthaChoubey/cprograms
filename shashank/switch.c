#include<stdio.h>
 int main()
  {
     char c;
     printf("Enter any alphabet =");
     scanf("  %c",&c);
     switch(c)
     {
         case 'a':
         case 'A':
         printf("It is a vowel ");
      break;
         case 'e':
         case 'E':
         printf("It is a vowel");
     break;
         case 'i':
          case 'I':
            printf("ti is a vowel ");
           break;
          case 'o':
          case 'O':
            printf("ti is a vowel ");
     break;
          case 'u':
          case 'U':
            printf("ti is a vowel ");
              break;
       default :
              printf("It is a consonant ");
}
   return 0;
}
