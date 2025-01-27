#include<stdio.h>
int main()
{
    int cost_price,selling_price;
    printf("");
    scanf("%d",&cost_price,&selling_price);
    if(cost_price > selling_price)
    {
        printf("Profit\n");
    }
    else if(cost_price < selling_price)
    {
        printf("Loss\n");
    }
    else if(selling_price == cost_price)
    {
        printf("No Profit No Loss\n");
    }
    else 
    {
        printf("Invalid\n");
    }

    return 0;
}