#include<stdio.h>
#define MAX 100
int main()
{
   int arr[MAX],size,temp,ptr;

   printf("Enter the size of an array :");
   scanf("%d",&size);

   printf("Enter elements of array :");
   for(int i=0;i<size;i++)
   {
      scanf("%d",&arr[i]);
   }


   for(int i=1;i<size;i++)
   {
         temp=arr[i];
         ptr=i-1;

            while(ptr>=0 && temp<arr[ptr])
            {
               arr[ptr+1]=arr[ptr];
               ptr=ptr-1;
            }
            arr[ptr+1]=temp;
   }
      for (int i = 0; i < size; i++)
      printf("\t%d",arr[i]);

}