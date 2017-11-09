#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char ch;
	printf("Enter a letter:");
	scanf(" %c", &ch);
	
	switch (ch){
      case 'a' :
         printf("It is a vowel " );
         break;
      case 'e' :
      	 printf("It is a vowel " );
         break;
      case 'i' :
         printf("It is a vowel" );
         break;
      case 'o' :
         printf("It is a vowel" );
         break;
      case 'u' :
         printf("It is a vowel" );
         break;
      default :
         printf("It is not a vowel" );
	}
	return 0;
}
