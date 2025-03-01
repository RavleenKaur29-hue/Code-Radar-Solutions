#include<stdio.h>
int main()
{
    char ch;
    scanf("%d",&ch);
    for(char i='A';i<='Z';i++)
    {
        for(char j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}