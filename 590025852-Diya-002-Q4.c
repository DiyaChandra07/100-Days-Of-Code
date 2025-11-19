#include <stdio.h>

int main()
{
    float r;
    float pi=3.14;

    printf("Please enter the radius of the circle: ");
    scanf("%f", &r);

    printf("Area: %f Perimeter: %f\n", pi*r*r, 2*pi*r);

    return 0;
}
