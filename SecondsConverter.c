#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

/*
Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. 
Test Data :
Input seconds: 25300 
Expected Output:
There are:
H:M:S - 7:1:40 

7 hours = 25200
1 minute = 60

 



*/

int Calculate(int input)
{
	int hours = input / 3600;
	printf("H:%d" ,hours);

	int minutes  = (input % 3600) / 60 ;
	printf("M:%d" ,minutes);

	int seconds = (input % 25260) ;
	printf("S:%d\n",seconds);




}



int main(void)
{
	int input;
	printf("This is a Seconds converter\n");
	printf("How many seconds do you want to input: ");
	scanf("%d",&input);
	Calculate(input);

	
}
