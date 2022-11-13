#include<stdio.h>
// Created by riturajps.in | @RituRajPS
int main()
{
    int celsius;
    printf("Enter the celsius :");
    scanf("%d", &celsius);
    float far  = (celsius * 9/5) + 32;
    printf("The fahrenheit of this  celsius is %f", far);
    return 0;
}
