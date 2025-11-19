#include <stdio.h>

int main()
{
    int length;
    int breadth;

    printf("Please enter the length and breadth of the reactangle: ");
    scanf("%d %d", &length ,&breadth);

    printf("Area: %d Perimeter: %d", length*breadth, 2*(length+breadth));

    return 0;
}