#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main()
{
    double Item1;
    double  Item2;
    double Num1;
    double Num2;

printf("Item  Weight 1 \n");
scanf("%lf",&Item1);

printf("How many of item 1\n");
scanf("%lf",&Num1);

printf("Item Weight 2 \n");
scanf("%lf",&Item2);

printf("How many of item 2\n");
scanf("%lf",&Num2);

float Average = ((Item1 * Num1) + (Item2 * Num2)) / (Num1 + Num2);

printf("The Average is : %f",Average);

}
