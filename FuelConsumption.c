#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


void Calculate(int distance,int fuel)
{
	
	float results = distance / fuel;
	printf("%0.2f ",results);


}



int main(void)
{
	int distance;
	int fuel;
	
	printf("How many miles did you go \n");
	scanf("%d",&distance);

	
	printf("How many liters of fuel did you buy\n");
	scanf("%d",&fuel);



		
	
	Calculate(distance,fuel);


	
}
