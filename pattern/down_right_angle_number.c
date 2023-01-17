#include<stdio.h>
// Created by github.com/theriturajps | @RituRajPS <----
int main()
{
    int i,j,n=5;

    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j<=n+1-i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
    // @RituRajPS <----
}

// n+1-j
// 54321
// 5432
// 543
// 54
// 5

// n+1-i
// 55555
// 4444
// 333
// 22
// 1

// i
// 11111
// 2222
// 333
// 44
// 5