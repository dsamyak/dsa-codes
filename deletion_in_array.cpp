#include<stdio.h>
#define MAX 100
int main()
{
	int arr[MAX];
	int i,key,size,flag=0,pos;

	printf("How many number you want to store:");
	scanf("%d",&size);
	
	printf("enter %d elements of array:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
		printf("Original Array:");
	for(i=0;i<size;i++)
{
		printf("\t%d",arr[i]);
}

		printf("\nEnter a value that you want to remove:");
		scanf("%d",&key);
		
		for(i=0;i<size;i++)
		{
			
		if(arr[i]==key){
			pos=i;
			flag=1;
			
			
			break;
		}}
		printf("\n");
		if(flag!=1){
			printf("Element not foumd.");
		}
		else{
			for(i=pos;i<size;i++){
				arr[i]=arr[i+1];
			}
			printf("modified Array:\t");
			for(i=0;i<size-1;i++){
				printf("%d\t",arr[i]);
			}
		
}
return 0;
}
