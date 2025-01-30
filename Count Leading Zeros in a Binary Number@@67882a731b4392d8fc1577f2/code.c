#include <stdio.h>
int main()
{
    int a,i=0;
    scanf("%d",&a);
    while((a&0)==1)
    {
        a=a<<1;
        i++;
    }
    printf("%d",i);
    return 0;
}