#include<stdio.h>
int main()
{
    unsigned long long a,num=0,i;
    scanf("%d",&a);
    for(i=31;i>=0;i--)
    {
        if(a&(1<<i))
        {
            num = num*10+1;
        }
        else
        {
            num = num*10;
        }
    }
    printf("%llu",num);
    return 0;
}