#include<stdio.h>
int isPrime(int num)
{
    if(num<=1)
   {
    printf("Not Prime\n");
    return ;
   }
   if(num==2)
   {
    printf("Prime\n");
    return ;
   }
   int is_prime = 1;
   for(int i=2;i<=num/2;i++)
   {
    if(num%i==0)
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