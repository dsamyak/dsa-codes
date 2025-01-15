#include<stdio.h>
#define MAX 100
int queue[MAX],front=-1,rear=-1,size;

    void enqueue(int item)
    {
        if(front==size-1)
        {
            printf("\nQueue is full\n");
        }
        else
        {
            front++;
            queue[front]=item;
        }
    }

    int dequeue()
    {
        if(rear==size-1)
        {
            printf("\nQueue is empty\n");
        }
        else
        {
            rear++;
            return queue[rear];
        }
    }


int main()
{
    int key,item,result;
    printf("enter the size:");
    scanf("%d",&size);
    
   
    
   
    do{
         printf("enter your choice:\n1. ENQUEUE\n2. DEQUEU\n3. EXIT\n");
         scanf("%d",&key);
        switch (key)
        {
            case 1:

            printf("ENQUEUE THE ITEM\n");
            scanf("%d",&item);
            enqueue(item);
            break;

            case 2:
                result=dequeue();
                if (result!=0)
                {
                      printf("\n%d\n",result);
                }
                
              
                break;

            case 3:
            break;
        }
    }
    while(key!=3);
    return 0;
}