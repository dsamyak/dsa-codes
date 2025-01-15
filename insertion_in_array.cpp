#include<stdio.h>
#define MAX 100
int main()
{
	int arr[MAX];
	
	int pos,size,value;
	printf("Enter how many elements you want to store:");

	scanf("%d",&size);
	    
		printf("Enter %d elements in Array:",size);
		for(int i=0;i<size;i++)
		{
	
	scanf("%d",&arr[i]);
        }

     printf("Enter posistion where you want to insert the another element and which value :");
     scanf("%d%d",&pos,&value);

      for(int i=size-1;i>=pos-1;i--) 
	  {
		  arr[i+1]=arr[i];
      }
	  arr[pos-1]=value;
	  
	  for( int i=0;i<size;i++)  
	  printf("%d\t",arr[i]);
return 0;
}
