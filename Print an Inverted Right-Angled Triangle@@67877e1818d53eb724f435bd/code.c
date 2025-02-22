#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n==1)
    {
        printf("*");
    }
    else if(n==2)
    {
        printf("* *");
        printf("*");
    }
    else if(n==3)
    {
        printf("* * *");
        printf("* *");
        printf("*");
    }
     else if(n==4)
    {
        printf("* * * *");
        printf("* * *");
        printf("* *");
        printf("*");
    }
     else if(n==5)
    {
        printf("* * * * *");
        printf("* * * *");
        printf("* * *");
        printf("* *");
        printf("*");
        
    }
     else if(n==6)
    {
        printf("* * * * * *");
        printf("* * * * *");
        printf("* * * *");
        printf("* * *");
        printf("* *");
        printf("*");
    }
     else if(n==7)
    {
        printf("* * * * * * *");
        printf("* * * * * *");
        printf("* * * * *");
        printf("* * * *");
        printf("* * *");
        printf("* *");
        printf("*");
    }
    return 0;
}