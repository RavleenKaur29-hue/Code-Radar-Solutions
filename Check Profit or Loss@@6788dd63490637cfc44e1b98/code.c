#include<stdio.h>
int main()
{
    int cost_price,selling_price;
    printf("");
    scanf("%d",&cost_price,&selling_price);
    if(cost_price > selling_price)
    {
        printf("Profit");
    }
    else if(cost_price < selling_price)
    {
        printf("Loss");
    }
    else if(cost_price == selling_price)
    {
        printf("No Profit No Loss");
    }
    else 
    {
        printf("Invalid");
    }

    return 0;
}