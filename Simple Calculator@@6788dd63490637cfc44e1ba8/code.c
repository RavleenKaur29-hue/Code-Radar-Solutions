#include<stdio.h>
int main()
{
    int b,c;
    char a;
    scanf("%d %d %c",&b,&c,&a);
    switch(a)
    {
        case '+':
            printf("%d\n",b+c);
            break;

        case '-':
            printf("%d\n",b-c);
            break;

        case '*':
            printf("%d\n",b*c);
            break;

        case '/':
            if(c!=0)
            {
                printf("%d\n",b/c);
                break;
            }
            else 
            {
                printf("Error\n");
                break;
            }

        default:
        printf("Error\n");
    }
    return 0;
}