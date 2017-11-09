#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float m, a, r, k, ma, mar, mark, marks, markss, marksss;
} s[1000];

int main()
{
    int i;

    printf("Enter information of students:\n");

    // storing information
    for(i=0; i<1000; ++i)
    {
        s[i].roll = i+1;

        printf("\nFor roll number%d,\n",s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks for subject one: ");
        scanf("%f",&s[i].m);
         printf("Enter marks for subject two: ");
        scanf("%f",&s[i].a);
         printf("Enter marks for subject three: ");
        scanf("%f",&s[i].r);
         printf("Enter marks for subject four: ");
        scanf("%f",&s[i].k);
         printf("Enter marks for subject five: ");
        scanf("%f",&s[i].ma);
         printf("Enter marks for subject six: ");
        scanf("%f",&s[i].mar);
         printf("Enter marks for subject seven: ");
        scanf("%f",&s[i].mark);
         printf("Enter marks for subject eight: ");
        scanf("%f",&s[i].marks);
         printf("Enter marks for subject nine: ");
        scanf("%f",&s[i].markss);
         printf("Enter marks for subject ten: ");
        scanf("%f",&s[i].marksss);
        printf("\n");
        
        int sum, average;
        sum = (s[i].m+s[i].a+s[i].r+s[i].k+s[i].ma+s[i].mar+s[i].mark+s[i].marks+s[i].markss+s[i].marksss);
        printf("\n");
        printf("%d", sum);
        printf("\n");
        average= (sum)/10;
        printf("%d", average);
        printf("\n");
   
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
	
    }

    printf("Displaying Information:\n\n");
    // displaying information
    for(i=0; i<1000; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}
