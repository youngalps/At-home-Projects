 #include <stdio.h>
int main(void)
{
    rectPerm(7,5);
    rectArea(7,5);
}

int rectPerm(l,w)
    {
        int perimeter;
        perimeter = l+l+w+w;
        printf("%i The perimeter is  ",perimeter);
    }

int rectArea(l,w)
{
    int Area;
    Area = l*w;
    printf("%i The area is",Area);
}
