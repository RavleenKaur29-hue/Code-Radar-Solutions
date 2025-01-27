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
    else (selling_price == cost_price)
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}