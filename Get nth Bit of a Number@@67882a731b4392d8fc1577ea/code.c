#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a>>b;
    if(a&1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}