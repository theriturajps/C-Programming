#include<stdio.h>
// Created by riturajps.in | @RituRajPS
int main()
{
    int rating;
    printf("Enter the rating from 1, 2, 3, 4, 5 : ");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("your rating is 1");
        break;
    case 2:
        printf("your rating is 2");
        break;
    case 3:
        printf("your rating is 3");
        break;
    case 4:
        printf("your rating is 4");
        break;
    case 5:
        printf("your rating is 5");
        break;  
    
    default:
        printf("Give rating from (1-5)");
        break;
    }
    
    return 0;
    // @RituRajPS
}
