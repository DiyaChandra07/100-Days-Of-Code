#include <stdio.h>

int main()
{
    
    int a;
    int b;
    printf("Please enter the numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Sum = %d Diff = %d Product = %d Quotient = %d\n", a + b, a - b, a * b, a / b);

    return 0;
}