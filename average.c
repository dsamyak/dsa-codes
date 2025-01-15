//Given an array, the task is to find average of that array. Average is the sum of array elements divided by the number of elements.

        #include<stdio.h>
        #define MAX 100
        int main()
        {
            int arr[MAX],size,sum=0;
            int average =0;
                
                printf("Enter the size of array:");
                scanf("%d",&size);

            printf("enter %d elements:",size);

            for(int i=0;i<size;i++)
            {

                scanf("%d",&arr[i]);
            }

                 for(int i=0;i<size;i++)
                   {

                      sum=sum+arr[i];

                   }

                           
            
                average =sum / size;

             printf("sum=%d\n",sum);
            printf("Average=%d",average);

        }