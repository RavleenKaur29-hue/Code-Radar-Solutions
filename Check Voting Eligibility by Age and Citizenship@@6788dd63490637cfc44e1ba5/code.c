#include<stdio.h>
int main()
{
    int age,citizenship;
    printf("");
    scanf("%d %d",&age,&citizenship);
    if(age>=18 && citizenship == 1)
    {
        printf("Eligible");
    }
    else(age<18 && citizenship == 0)
    {
        printf("Not Eligible");
    }
    return 0;
}