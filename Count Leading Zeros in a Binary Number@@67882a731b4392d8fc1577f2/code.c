#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b = ((a>>31)&1==1)
    printf("%d\n",b);
    return 0;
}