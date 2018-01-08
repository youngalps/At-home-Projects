#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


void Calculate(int hours)
{	
	int salaryHour = 15000;
	int results = hours * salaryHour;
	printf("The total is %d \n",results);
}


int main(void)
{
	char employeeId[6] = {0};
	int hours;



	printf("Please Enter Your 5 letter Id\n");
	scanf("%5s",employeeId);
	
	printf("Hello %5s ",employeeId);	


	printf("Hours Clocked in?\n");
	scanf("%i",&hours);

	Calculate(hours);
	
	return(0);
	
	


}
