#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>



int main(void)
{
circlePerm(6);
circleArea(6);
}


 int circlePerm(radius)
{

    float perm = M_PI * 2 * radius;

    printf("%fThe radius of this cirlce is \n",perm);

}

int circleArea(radius)
{
    float Area = M_PI * powf(radius,2.0f);

    printf("%f The Area of this cirlce is",Area);

}
