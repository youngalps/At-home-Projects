#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

// 3 100 bank note
// total left over is 75
// 

int Calculate(int input)
{
	int hundred = input /  100;
	printf("100 banknotes: %d \n ",hundred);
	printf("\n");
	
	int fifty = (input % 100) / 50   ;
	printf("50 banknotes: %d \n",fifty);
	printf("\n");

	int twenty = (input % 350) / 20;
	printf("20 banknotes: %d \n",twenty);
	printf("\n");

	int ten = (input % 370) / 10;
	printf("10 banknotes: %d \n",ten);
	printf("\n");

	int five = (input % 370) / 5;
	printf("5 banknotes: %d \n",five);
	printf("\n");

	int two = (input % 375) / 2;
	printf("2 banknotes: %d \n",two);
	printf("\n");

	int one = (input % 375) / 1;
	printf("1 banknotes: %d \n",one);
	printf("\n");




}



int main(void)
{


	
	int input;	

	printf("Input the amount of money you want broke down:\n");
	scanf("%d",&input);

	Calculate(input);






}
