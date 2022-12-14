#include<stdio.h>
int main()
{
    char ch;

    printf("Enter Any Upper or Lower Character :> ");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90){
        printf("The Lowercase of %c is %c", ch, ch+32);
    }
    if(ch>=97 && ch<=122){
        printf("The Uppercase of %c is %c", ch, ch-32);
    }

    return 0;
    // @RituRajPS <----
}
