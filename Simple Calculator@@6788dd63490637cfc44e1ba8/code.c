#include<stdio.h>
int main()
{
    int b,c;
    char a;
    scanf("%d %d %c",&b,&c,&a);
    switch(a)
    {
        case '+':
            printf("Addition: %d\n",b+c);
            break;

        case '-':
            printf("Subtraction: %d\n",b-c);
            break;

        case '*':
            printf("Multiplication: %d\n",b*c);
            break;

        case '/':
            if(c!=0)
            {
                printf("Division: %d\n",b/c);
                break;
            }
            else 
            {
                printf("Invalid\n");
                break;
            }

        default:
        printf("Invalid\n");
    }
    return 0;
}