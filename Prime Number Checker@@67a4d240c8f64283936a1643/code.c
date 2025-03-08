#include<stdio.h>
void isPrime(int num)
{
    if(a<=1)
   {
    printf("Not Prime\n");
    return ;
   }
   if(a==2)
   {
    printf("Prime\n");
    return ;
   }
   int is_prime = 1;
   for(int i=2;i<=a/2;i++)
   {
    if(a%i==0)
    {
      is_prime = 0;
      break;
    }
   }
   if(is_prime)
   {
    printf("Prime\n");
   }
   else 
   {
    printf("Not Prime\n");
   }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}