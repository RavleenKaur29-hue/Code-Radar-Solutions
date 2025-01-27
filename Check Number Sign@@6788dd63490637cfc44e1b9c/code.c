#include<stdio.h>
int main()
{
    int a;
    printf("");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive\n");
    }
    else if(a<0)
    {
        printf("Negative\n");
    }
    else if(a==0)
    {
        printf("Zero\n");
    }
    else 
    {
        printf("Invalid\n")
    }
    return 0;
}