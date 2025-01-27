#include<stdio.h>
int main()
{
    int a,b;
    printf("");
    scanf("%d %d",&a,&b);
    if(b == a*a)
    {
        printf("Yes\n");
    }
    else 
    {
        printf("No\n");
    }
    return 0;
}