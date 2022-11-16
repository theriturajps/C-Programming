#include<stdio.h>
#include<math.h>
// Created by riturajps.in | @RituRajPS
int main()
{
    float base, power, sqr;

    printf("Enter the base :");
    scanf("%f", &base);

    printf("Enter the power:");
    scanf("%f", &power);

    sqr = pow(base, power);

    printf("The Square Is : %f", sqr);

    return 0;
    // @RituRajPS
}
