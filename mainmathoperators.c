#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int weight = 70;
	
	printf("If I eat a watermelon, I will weigh %d kilograms \n", weight);  
	printf("If I eat a watermelon, I will weigh %d kilograms \n", weight+12); //addition operator
	printf("If I eat a watermelon, I will weigh %d kilograms \n", weight-12); //subtraction operator
	printf("If I eat a watermelon, I will weigh %d kilograms \n", weight*12); //multiplication operator
	printf("If I eat a watermelon, I will weigh %d kilograms \n", weight/12); //division operator
	printf("If I eat a watermelon, I will weigh %d kilograms \n", weight%12); //modulus operator, gives the remainder
	
	//int gives results for whole numbers only while float gives results for decimal numbers only
	int a=63;
	int b=20;
	printf("Result:%d \n", a/b);
	
	float c=63;
	float d=20;
	printf("Result:%.3f \n", c/d);
	
	//order of operations in c programming follows order of operations in Maths
	//one can use brackets to manipulate operations
	int e=4;
	int f=6;
	int g=8;
	int h = f-e*g;
	int i = (f-e)*g;
	printf("Result:%d \n", h);
	printf("Result:%d \n", i);
	
	//another way of doing the above operation
	int j=6-4*8;
	int k=(6-4)*8;
	printf("Result:%d \n", j);
	printf("Result:%d \n", k);
	
	
	
	return 0;
}
