#include<stdio.h>
int main()
{
    int a,b;
    printf("");
    scanf("%d %d",&a,&b);
    b = b>>a;
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