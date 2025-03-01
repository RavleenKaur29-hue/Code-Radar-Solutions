#include<stdio.h>
int main()
{
    int ch;
    scanf("%d",&ch);
    for(char i='A';i<='Z'+ch;i++)
    {
        for(char j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}