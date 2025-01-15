#include<stdio.h>
#define MAXSIZE 100
int main()
{
	int N,i,DATA[MAXSIZE],ITEM,LOC,n;
	
	printf("Enter the size of an array :");
	scanf("%d",&N);
	
	printf("Enter an array elements :");
	for(i=0;i<N;i++)
	scanf("%d",&DATA[i]);
	
	printf("Array element are as follow:\n");
	for(i=0;i<N;i++)
	printf("%d	",DATA[i]);
	printf("\n");
	n=N;
	
	printf("Enter index at which you want to insert an element:");
	scanf("%d",&LOC);
	
	if(LOC>N)
	{
		printf("Invalid index...\n");
		
	}
	else
	{
		printf("Enter an element you want to insert in an array:");
		scanf("%d",&ITEM);
		
		if(LOC==N)
		{
			DATA[N]=ITEM;
		}
		else
		{
			for(i=N-1;i>=LOC;i--)
			{
				DATA[N]=DATA[N-1];
				N--;
			}
			DATA[LOC]=ITEM;
		}
		
		printf("Array elements are as follow:\n");
		for(i=0;i<=n;i++)
		printf("%d",DATA[i]);
	}
	
}
