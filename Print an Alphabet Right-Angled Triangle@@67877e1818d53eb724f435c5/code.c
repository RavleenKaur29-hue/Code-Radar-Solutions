#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      for(char ch='A';ch<'A'+i;ch++)
      {
       char ch='A';
       printf("%c ",ch);
       ch++;
      }
      printf("\n");
    }
    return 0;
}
