#include<stdio.h>
int main()
{
    int n,r,ans=0;
    scanf("%d",&n);
    while(n>0)
    {
        r = n%10;
        ans = ans*10+r;
        n = n/10;
    }
    printf("%d\n",ans);
    return 0;
}