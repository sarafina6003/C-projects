#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//String Terminator--Is a character that C puts at the end of a string to realize its end
//Array--Holds information and makes it manipulatable

int main() {
	char name[17]= "Sarafina Nyawira";
	printf("My name is %s \n", name);
	name[2]= 'n';
	printf("My name is %s \n", name);
	
	char food[]= "tuna";
	printf("The best food is %s \n", food);
	strcpy(food, "fries");
	printf("The best food is %s \n", food);
	
	
	return 0;
}
