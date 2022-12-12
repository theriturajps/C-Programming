#include<stdio.h>
// Created by github.com/theriturajps | @RituRajPS <----
int main()
{
    
    int marks;
    printf("Enter your marks 0-100 :> ");
    scanf("%d", &marks);

    if (marks>=0 && marks <=100){
        if (marks < 30){
            printf("C");
        } else if (marks >= 30 && marks < 70){
            printf("B");
        } else if (marks >= 70 && marks < 90){
            printf("A");
        } else if (marks >= 90 && marks <= 100){
            printf("A++");
        }
    } else {
        printf("Not Valid Marks");
    }

    return 0;
    // @RituRajPS <----
}   
