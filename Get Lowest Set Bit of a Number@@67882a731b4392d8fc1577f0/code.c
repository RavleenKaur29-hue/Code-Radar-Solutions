#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    i = 0;
    while((a&1)==0)
    {
        a = a>>1;
        i++;
    }
    printf("%d",i);
    return 0;
}