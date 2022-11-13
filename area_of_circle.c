#include<stdio.h>

int main()
{
    int rad;
    float pi = 3.14;
    printf("Enter the rad :");
    scanf("%d", &rad);

    float area = pi*rad*rad;

    printf("The area of the circle is %f", area);
    return 0;
}