#include<stdio.h>
int main()
{
    int ch;
    scanf("%d",&ch);
    for(char i='A';i<='Z';i++)
    {
        for(char j='A';j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}