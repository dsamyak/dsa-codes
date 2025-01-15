#include<stdio.h>
#define MAX 100


int main()
{
    int stack[MAX],arr[MAX];
    int size,top=-1;
    printf("Enter the size of stack:\n");
    scanf("%d",&size);

    
    for(int i=0;i<size;i++)
    {
        if(top==size)
        {
            printf("STACK OVERFLOW ");
            
        }
        else
        {
            int item;
            printf("enter item at top of the stack:\n");
            scanf("%d",&item);
            top++;
            stack[top]=item;
        }
    }
    
    for(int i=0;i<size;i++)
    {
        arr[i]=stack[top--];
    }

    

    for(int i=0;i<size;i++)
    {
        printf("\t%d",arr[i]);

    }

}