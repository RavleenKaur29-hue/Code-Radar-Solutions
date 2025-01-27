#include<stdio.h>
int main()
{
    float a,b;
    char op;
    printf("");
    scanf("%f %f %c",&a,&b,&op);
    switch(op)
    {
        case '+':
            printf("%f\n",a+b);
            break;
        case '-':
            printf("%f\n",a-b);
            break;
        case '*':
            printf("%f\n",a*b);
            break;
        case '/':
                printf("%f\n",a/b);
                break;
        default:
                printf("Error\n");

    }
    return 0;
}