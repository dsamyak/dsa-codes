     #include<stdio.h>
     #include<string.h>
     #define MAX 100
  
      int main()
        {

            char arr[MAX][MAX],temp[20];
           int size,count,flag=1;
            printf("Enter size of list:");
            scanf("%d",&size);

            printf("Enter %d strings of array:",size);
                
                for(int i=0;i<size;i++)
                {
                    scanf("%s",arr[i]);
                }   
				
				 
                for(int i=1;i<size;i++)
                { 
                    //flag=1;
                    //count=0;
                    for(int j=0;j<size-i;j++)
                    {
                        if(strcmp(arr[j],arr[j+1])==1)
                        {
                            
                            strcpy(temp,arr[j]);
                            strcpy(arr[j],arr[j+1]);
                            strcpy(arr[j+1],temp);
                            count=count+1;
                            
                        }
                    }
                    
                
                    //printf("\n IN %d PASS THERE IS %d SWAPS",i,count); 
                
                
            

                }

printf("\n");
                for(int i=0;i<size;i++)
                {
                    printf("\t%s",arr[i]);
                }
                return 0;
        }