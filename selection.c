#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX], min=0,size;

    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d array elements:",size);
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<size;i++)
    {
       min=i;
     
       for(int j=i+1;j<size;j++)
       {
        if(arr[j]<arr[min])
        {
            min=j;
            

        }
       }
       if(min != i)
       {
        int temp;
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
       }

    }
    for (int i = 0; i < size; i++)
    {
        printf("\n%d",arr[i]);
    }
    


}