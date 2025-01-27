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
        case '-':
            printf("%d\n",a-b);
        case '*':
            printf("%d\n",a*b);
        case '/':
            if(b==0)
            {
                printf("Error");
            }
            else 
            {
                printf("%d\n",a/b);
            }

    }
    return 0;
}