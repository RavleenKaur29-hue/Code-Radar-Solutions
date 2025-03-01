#include<stdio.h>
int main()
{
    int n,r,ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       while(n>0)
    {
        r = i%10;
        ans = ans*10+r;
        n = i/10;
    }
    for(int j=1;j<=2*i-1;j++)
    {
        printf("%d",i);
    }
    }
    return 0;
}