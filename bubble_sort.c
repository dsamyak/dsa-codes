     #include<stdio.h>
     #define MAX 100
  
      int main()
        {

            int arr[MAX],size,temp,count,flag=1;
            printf("Enter size of array:");
            scanf("%d",&size);

            printf("Enter %d elements of array:",size);
                
                for(int i=0;i<size;i++)
                {
                    scanf("%d",&arr[i]);
                }   

                for(int i=1;i<size;i++)
                { 
                    flag=1;
                    count=0;
                    for(int j=0;j<size-i;j++)
                    {
                        if(arr[j]>arr[j+1])
                        {
                            
                            temp=arr[j];
                            arr[j]=arr[j+1];
                            arr[j+1]=temp;
                            count=count+1;
                            
                        }
                    }
                     printf("\n IN %d PASS THERE IS %d SWAPS",i,count); 
                
                 }

printf("\n");
                for(int i=0;i<size;i++)
                {
                    printf("\t%d",arr[i]);
                }
                return 0;
        }