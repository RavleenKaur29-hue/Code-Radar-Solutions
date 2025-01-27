#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("");
    scanf("%c",&ch);
    if(isdigit(ch))
    {
        printf("Digit\n");
    }
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'|| 
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel\n");
    }
    else if(isalpha(ch))
    {
        printf("Consonant\n");
    }
    else 
    {
        printf("Special Character\n");
    }
    return 0;
}