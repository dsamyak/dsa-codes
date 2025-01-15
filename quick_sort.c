#include<stdio.h>
int main()
{
    int arr[]={8,4,2,1000,43,6,2,4,42,3};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    int pivot,lb=0,ub=size;
    pivot=lb;
    
    int start,end;
    start=0;
    end=ub;
    while(start<=end)
    {
         while(arr[start]<=arr[pivot])
         {
        ++start;
         }
         while(arr[end]>=arr[pivot])
         {
            --end;
         }

         if(start<end)
         {
            int temp;
            temp=arr[start];
           arr[start]=arr[end];
            arr[end]=temp;
         }
        
        

    }
     
    
         if(start>end)
         {
            int temp;
            temp=arr[end];
            arr[end]=arr[pivot];
            arr[pivot]=temp;
            
         }
    
    for(int i=0;i<size;i++)
    printf("\t%d",arr[i]);
}