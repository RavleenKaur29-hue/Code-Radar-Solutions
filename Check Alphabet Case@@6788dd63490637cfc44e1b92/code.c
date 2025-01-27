#include<stdio.h>
int main()
{
    char ch;
    printf("");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("Lowercase\n");
    }
    return 0;
}