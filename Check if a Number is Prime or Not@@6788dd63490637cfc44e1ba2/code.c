#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if (n<=1)
    {
      printf("Not Prime\n");
      return 0;
    }
    i = 2;
    while(i<=(n/2))
    {
        if(n%i == 0)
        {
            printf("Not Prime\n");
            break;

        }
        i++;
    }
    if(i>(n/2))
    {
        printf("Prime\n");
    }
    return 0;
}