#include <stdio.h>

int main()
{
    float radius;
    float pi=3.14;

    printf("Please enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Area: %f Perimeter: %f", pi*radius*radius, 2*pi*radius\n);

    return 0;
}
