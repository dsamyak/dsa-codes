#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

   void push(struct node **top)
   {
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("INVALID MEMORY ALLOCATION");
        return;
    }
    else
    {
        if(*top==NULL)
       {   
         *top=newnode;
          newnode->link=NULL;
          printf("push the item into top of the stack:\n");
          scanf("%d",&(*top)->data);
       }
       else
       {
             newnode->link=*top;
             *top=newnode;
             printf("push the item into top of the stack:\n");
              scanf("%d",&(*top)->data);
       }
    }
   }


     void pop(struct node **top)
        {
            if(*top==NULL)
            {
                printf("STACK UNDERFLOW");
            }
                printf("\t%d",(*top)->data);
                *top=(*top)->link;
        }

    void peek(struct node **top)
        {
            printf("\n%d\n",(*top)->data);
        }

    void reverse(struct node **top)
        {    
                struct node *ptr=*top;
                while(ptr!=NULL)
                {
                    pop(&(*top));
                    ptr=ptr->link;
                }

        }

int main()
{
    struct node *top=NULL;
    int key;
    
       do  
        {
            printf("\nEnter your choice \n1.PUSh\n2.POP\n3.PEEK\n4.reverse\n5.EXIT:\n");
            scanf("%d",&key);

            switch (key)
            {
            case 1:
                push(&top);
                break;
            
            case 2:
                pop(&top);
                break;
            
            case 3:
                peek(&top);
                break;
            
            case 4:
                reverse(&top);
                break;
            case 5:
                break;
            
            default:
                printf("Invalid atributes");
            }
         }
         while(key!=5);
}