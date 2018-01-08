#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


// Forumla distance between two points
// SQ(X2-X1)^2 + (Y2-Y1)^2
//((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));


float Calculate(float X1,float X2,float Y1,float Y2)
{
	
	float results = ((X2-X1)*(X2 - X1)) + ((Y2 - Y1)*(Y2 - Y1));
	printf("The distance between the two points %.4f",sqrt(results));
}



int main(void)
{
	
	float X1;
 	float X2;
	float Y1;
	float Y2;

	printf("Enter X1\n");
	scanf("%f",&X1);

	printf("Enter Y1\n");
	scanf("%f",&Y1);


	printf("Enter X2\n");
	scanf("%f",&X2);


	printf("Enter Y2\n");
	scanf("%f",&Y2);

	Calculate(X1,X2,Y1,Y2);
}
