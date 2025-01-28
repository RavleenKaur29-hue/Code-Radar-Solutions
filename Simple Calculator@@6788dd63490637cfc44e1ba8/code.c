#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("");
    scanf("%d %d %c",&a,&b,&op);
    switch(op)
    {
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            if(b!=0)
            {
            printf("%.0f\n",a/(float)b);
            }
            else 
            {
                printf("Error\n");
            }
            break;
        default:
            printf("Error\n");    
    }
    return 0;
}
