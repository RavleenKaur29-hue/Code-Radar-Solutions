#include<stdio.h>
int main()
{
    int a,b,c,average;
    printf("");
    scanf("%d %d %d",&a,&b,&c);
    average = a+b+c/3.0;
    printf("Average: %.2f\n",average);
    return 0;
}