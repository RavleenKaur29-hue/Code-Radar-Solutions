#include<stdio.h>
int main()
{
    int n;
    char ch='A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      for(char='A';ch<'A'+i;ch++)
      {
       printf("%c ",ch);
       ch++;
      }
      printf("\n");
    }
    return 0;
}
