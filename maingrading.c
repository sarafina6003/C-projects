#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
   int a,b,c,d,e, sum, average;
   printf("\nEnter marks for subject one:");
   scanf("%d", &a);
   printf("\nEnter marks for subject two:");
   scanf("%d", &b);
   printf("\nEnter marks for subject three:");
   scanf("%d", &c);
   printf("\nEnter marks for subject four:");
   scanf("%d", &d);  
   printf("\nEnter marks for subject five:");
   scanf("%d", &e);
   sum = a+b+c+d+e;
   printf("\n");
   printf("%d", sum);
    printf("\n");
   average= (sum)/5;
   printf("%d", average);
   
   if(average>70){
   	 printf("\nGrade A");
   }
    else if (average>=60 && average<=69){
    	printf("\nGrade B");
	}
	else if (average>=50 && average<=59){
    	printf("\nGrade C");
	}
	else if (average>=40 && average<=49){
    	printf("\nGrade D");
	}
	else if (average<40){
    	printf("\nGrade E");
	}
	
	return 0;
   }

