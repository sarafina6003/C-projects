#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int HoursStudied = 5; //10 0r more
	int KidsBeatUp = 0; //0
	char answer;
	
	if(HoursStudied>=10 && KidsBeatUp==0) //&& logical and
	{
		printf("You are a good student \n\n");
	}
	else
		{
		printf("You are not a good student \n\n");
	}
	
	printf("Do you like yoghurt? (y/n):");
	scanf("%c", &answer);
	
	if(answer=='y' ||  answer=='n') //&& logical or
	{
		printf("Good, you never messed up! \n");
	}
	else
		{
		printf("You messed up bigtime! \n");
	}
	
	
	return 0;
}
