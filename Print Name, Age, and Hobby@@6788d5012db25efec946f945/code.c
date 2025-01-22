#include<stdio.h>
int main()
{
    char name[50];
    int age;
    char hobby[80];
    printf("");
    scanf("%c %d %c",&name,&age,&hobby);
    printf("Name: %c",name);
    printf("Age: %d",age);
    printf("Hobby: %c",hobby);
    return 0;
}