#include<stdio.h>
#include<stdlib.h>
struct Queue
{
    int data;
    struct Queue *link;
};
        int size;
        struct Queue *rear=NULL,*front=NULL;

    void enqueue(int value)
    {
        
        
                struct Queue *newnode= (struct Queue*)malloc(sizeof(struct Queue));
                struct Queue *ptr;  
                    newnode->data=value;
                    
                    if(rear==NULL)
                    {
                         rear=front=newnode;
                         newnode->link=NULL;
                    }
                    else
                    {
                        ptr=front;
                        while(ptr->link!=NULL)
                        {
                            ptr=ptr->link;
                        }
                        
                        ptr->link=newnode;
                        rear=newnode;
                        newnode->link=NULL;
                    }
            
    }

    int dequeue()
    {
        if(front==NULL)
        {
            printf("\nQueue is empty!");
        }
        else
        {
            int result;
            result = front->data;
            front = front->link;
            return result;
        }
    }


int main()
{
    int key,result=0,value;
    struct Queue *rear=NULL,*front=NULL,*newnode,*ptr;
    printf("\nEnter the size of stack");
    scanf("%d",&size);
        do 
        {

        
        printf("\nEnter your choice \n1.Enqueue\n2. Dequeue\n3. Exit");
        scanf("%d",&key);
        switch(key)
        {
            case 1:
            printf("\nEnter the value");
            scanf("%d",&value);
            enqueue(value);
            break;

            case 2:
           
            result=dequeue();
            printf("\n%d",result);
            break;
            case 3:
            ptr=rear;
            if(ptr!=NULL)
            {
                printf("\t%d",ptr->data);
                ptr=ptr->link;
            }
            break;
        }
        }while(key!=3);
   


}