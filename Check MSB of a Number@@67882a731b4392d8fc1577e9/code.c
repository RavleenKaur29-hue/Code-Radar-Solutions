#include<stdio.h>
int main()
{
    int a;
    printf("");
    scanf("%d",&a);
    if(a&32)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}