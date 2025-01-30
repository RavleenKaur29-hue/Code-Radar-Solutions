#include<stdio.h>
int main()
{
    int a;
    printf("");
    scanf("%d",&a);
    a = a>>31;
    if(a&1==1)
    {
        printf("Set\n");
    }
    else
    {
        printf("Not Set\n");
    }
    return 0;
}