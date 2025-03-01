#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        char ch;
        scanf("%c",ch);
        for(char ch='A';ch<='Z',ch++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}