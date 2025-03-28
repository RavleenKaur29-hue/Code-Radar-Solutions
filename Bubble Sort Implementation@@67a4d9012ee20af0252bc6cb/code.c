//#include<stdio.h>
void bubbleSort(int *arr,int n)
{
   int pass,count,temp;
   for(pass=0 ; pass<n-1 ; pass++)
   {
    for(count=0 ; count<n-pass-1 ; count++)
    {
        if(arr[count] > arr[count + 1])
        {
           temp = arr[count];
           arr[count] = arr[count+1];
           arr[c+1] = temp;
        }
    }
   }
}
void printArray(int *arr , int n)
{
    int i;
    for(i=0 ; i<n ; i++)
    {
        printf("%d",arr[i]);
    }
}