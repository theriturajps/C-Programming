#include<stdio.h>
// Created by riturajps.in | @RituRajPS
int main()
{
    int principal, rate, time;

    printf("Enter the principal ammount :");
    scanf("%d", &principal);

    printf("Enter the Rate Amount :");
    scanf("%d", &rate);

    printf("Enter the time period of the interest :");
    scanf("%d", &time);

    float si = (principal * rate * time) / 100;

    printf("The Simple Interest of the given details is %f", si);
    return 0;
}
