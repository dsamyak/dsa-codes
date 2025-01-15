#include<stdio.h>
int arr[5];

int main()
{
    printf("nentr ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("\t%d",arr[i]);
    }
}