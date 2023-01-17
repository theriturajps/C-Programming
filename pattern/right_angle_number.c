#include<stdio.h>
// Created by github.com/theriturajps | @RituRajPS <----
int main()
{
    int i,j,n=5;

    for (i = 1; i <=n; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            printf("%d", n+1-i);
        }
        printf("\n");
        
    }
    
    return 0;
    // @RituRajPS <----
}

// n+1-j
// 5
// 54
// 543
// 5432
// 54321

// n+1-i
// 5
// 44
// 333
// 2222
// 11111