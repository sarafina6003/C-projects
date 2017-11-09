#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char response[5];
	char responsee[3];
	
	printf("Do you have an ID card?(yes/no): \n");
    scanf("%s", &response);
    
    if(!strcmp(response, "yes"))
	{
      printf("You can vote! \n");
    	
      printf("Do you have a voter's card?(y/n): \n");
      scanf("%s", &responsee);
    
      if(!strcmp(responsee, "y")){
    	printf("See you on voting day! \n");}
    	
	  else if(!strcmp(responsee, "n")) {
	  printf("Go get registered as a voter \n");}
	  
	}
	
    else(!strcmp(response, "no"));
	{
	printf("You cannot vote \n");
	} 
	
	
	
	return 0;
}
