#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>



int main(void)
{

	int firstNum;
	int secondNum;
	int thirdNum;

	printf("Please enter your first number\n");
	scanf("%d",&firstNum);

	printf("Please enter your second number\n");
	scanf("%d",&secondNum);

	printf("Please enter your third number\n");
	scanf("%d",&thirdNum);
	
	
	if((firstNum > secondNum) && (firstNum > thirdNum))
	{
		printf("%d",firstNum,);

	}
	


	else if((secondNum > firstNum) && (secondNum > thirdNum))
	{
		printf("%d",secondNum);
	}

	else if((thirdNum > secondNum) && (thirdNum > firstNum))
	{

		printf("%d",thirdNum,);
	}

	
}
