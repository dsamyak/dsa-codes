#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int mid,beg,key,end,size,position,i;

    printf("How many numbers you want to store: ");     
    scanf("%d",&size);

    printf("Enter %d elements in Accending or Deccending order:\n",size);
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

    printf("Enter number you want to search:");
    scanf("%d",&key);
    arr[size] = key;

    beg=arr[0];

    end=arr[size];

    do
    {
        mid=(beg + end)/2;
        if(key == arr[mid])
        {
            position = mid;
        }
        else
        {
            if(key < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
               beg = mid + 1;
            }   
        }
    }while(position != mid);

    if(arr[position]== key)
    {
        printf("Element found at %d",position);
    }
    else
    {
        printf("The element does not exists");
    }

}