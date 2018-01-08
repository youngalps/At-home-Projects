#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


void Calculate(int days)
{
 int newYears = days /365;
 int newWeeks = (days % 365) / 7;
 int newDays = (days % 365) % 7; 
 
    printf("%d\n",newYears);
    printf("%d\n",newWeeks);
    printf("%d\n",newDays);
}

int main(void)
{
Calculate(1329);
}
