#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//CONVERSION CHARACTERS--Used to customize a program
int main() {
	printf("%s is a nice person\n", "Sera");
	//%s is used for words and strings only
    printf("I bought %d packets of milk\n", 10);
	//%d is used for whole numbers only
	printf("She weighs %f kilograms\n", 67.9876543);
	//%f is used for decimal numbers only
	printf("She weighs %.2f kilograms\n", 67.9876543);
	//%.2f is used to round off to 2 decimal numbers only
	printf("She weighs %.4f kilograms\n\n\n", 67.9876543);
	//%.4f is used to round off to 4 decimal numbers only
	
//VARIABLES--Usually letters, mostly lowercase. Short letters without spacing or symbols in between can also be used	
	int age;
	age=2017-1997; //20
	printf("She is %d years old\n\n", age);
	
	int birthyear;
	int currentyear;
	int agenow;
	birthyear=1989;
	currentyear=2017;
	agenow=currentyear-birthyear;
	printf("She is %d years old\n", agenow);
	
	return 0;
}
