#include<stdio.h>
// Created by github.com/theriturajps | @RituRajPS <----
int main()
{
    int i,j,n=5;

    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j<=n+1-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
    // @RituRajPS <----
}

// *****
// ****
// ***
// **
// *