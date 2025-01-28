#include<stdio.h>
int main()
{
    int a,b;
    char op;
    switch(op)
    {
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '+':
            printf("%d\n",a*b);
            break;
        case '/':
            printf("%d\n",a/b);
            break;
        default:
            printf("Error");    
    }
    return 0;
}
