//Find the first duplicate element in the linked list
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
void find(struct node **start)
{
    struct node *ptr,*prev;
    ptr=*start;
    prev=ptr->link;
    while(ptr!=NULL)
    {
        while(prev!=NULL)
        {
            if (ptr->data==prev->data)
            {
                printf("\nfirst occured no. is %d",ptr->data);
                return;
                break;
                
            }
            prev=prev->link;
        }
        ptr=ptr->link;
    }

}
int main()
{
    int size;
    struct node *start=NULL,*newnode,*ptr;

    printf("Enter size of the list:\n");
    scanf("%d",&size);
    for(int i=1;i<=size;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data of node %d :\n",i);
        scanf("%d",&newnode->data);

            if(start==NULL)
            {
                start=newnode;
                newnode->link=NULL;
            }
            else
            {
                    newnode->link=start;
                    start=newnode;
            }
    }
    
    find(&start);

}