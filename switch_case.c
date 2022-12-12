#include<stdio.h>
// Created by github.com/theriturajps | @RituRajPS <----
int main()
{
    int day;
    
    printf("Enter the day in (1 - 7)");
    scanf("%d", &day);

   switch (day){
    case 1 : printf("Monday \n");
        break;
    case 2 : printf("Tueday \n");
        break;
    case 3 : printf("Wedneday \n");
        break;
    case 4 : printf("Thrusday \n");
        break;
    case 5 : printf("Friday \n");
        break;
    case 6 : printf("Saturday \n");
        break;
    case 7 : printf("Sunday \n");
        break;
    default : printf("Not valid");
   }

    return 0;
    // @RituRajPS <----
}   
