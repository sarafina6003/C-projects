#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char name[20];
	char crush[20];
	int babies;
	
	printf("What is your name? \n");
	scanf("%s", name);
	printf("What is your spouse's name? \n");
	scanf("%s", crush);	
	printf("How many kids will you get? \n");
	scanf("%d", &babies);
	
	printf("%s and %s are in love and will have %d babies \n", name,crush,babies);
	return 0;
}
