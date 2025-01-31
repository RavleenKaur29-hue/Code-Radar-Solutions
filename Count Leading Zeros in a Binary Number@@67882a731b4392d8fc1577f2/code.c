#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    a = ((a>>31)&1==0)
    printf("%d\n",a);
    
    return 0;
}