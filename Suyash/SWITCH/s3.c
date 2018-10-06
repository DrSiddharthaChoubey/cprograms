#include<stdio.h>

int main()
{
char ch;

printf("\nEnter the character : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a' :
		case 'A' :
		case 'e' : 
		case 'E' : 
		case 'i' : 
		case 'I' : 
		case 'o' : 
		case 'O' :
		case 'u' :
		case 'U' : printf("\nCharacter entered is a vowel");
						break;
		default : printf("\nCharacter entered is a consonent");
	}
printf("\n");
return 0;
}
