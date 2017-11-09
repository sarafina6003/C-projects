#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main ()
{

    int sum;
    int number;

    printf("Enter how many numbers you'd like to sum up: \n");
    scanf("%d", &number);
    
    int x;
    for(x=0;  x<=number, x++;)
    { 
        sum+=x;
    }
    printf("The sum is %d", sum);
    //cout<<"sum is: "<< sum<<endl;
    return 0;
}
