#include<stdio.h>
// Created by github.com/theriturajps | @RituRajPS <----
int main()
{
    int i,j,n=5;

    for (i = 1; i <=n; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            if ((i+j)%2 == 0)
            {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
        
    }
    return 0;
    // @RituRajPS <----
}

// 1
// 01
// 101
// 0101
// 10101