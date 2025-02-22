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
        printf("* *\n");
        printf("*");
    }
    else if(n==3)
    {
        printf("* * *\n");
        printf("* *\n");
        printf("*");
    }
     else if(n==4)
    {
        printf("* * * *\n");
        printf("* * *\n");
        printf("* *\n");
        printf("*\n");
    }
     else if(n==5)
    {
        printf("* * * * *\n");
        printf("* * * *\n");
        printf("* * *\n");
        printf("* *\n");
        printf("*\n");
        
    }
     else if(n==6)
    {
        printf("* * * * * *\n");
        printf("* * * * *\n");
        printf("* * * *\n");
        printf("* * *\n");
        printf("* *\n");
        printf("*");
    }
     else if(n==7)
    {
        printf("* * * * * * *\n");
        printf("* * * * * *\n");
        printf("* * * * *\n");
        printf("* * * *\n");
        printf("* * *\n");
        printf("* *\n");
        printf("*");
    }
    return 0;
}