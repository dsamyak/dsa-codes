#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
int main()
{
        struct node*start=NULL;
        struct node*ptr;
        struct node*newnode;
        struct node*prev;
        int n;

        printf("enter the number of nodes:");
        scanf("%d",&n);
        //creating nodes or allocating dynamic memory and inserting at end 
       
        for(int i=1;i<=n;i++)
         {
             newnode=(struct node*)malloc(sizeof(struct node* ));
    
                printf("Enter data at node %d : ",i);
                scanf("%d",&newnode->data);

                        //JOINING NODES IN LINKED LIST
                        if(start==NULL)
                        {
                                start=newnode;
                                newnode->link=NULL;
                        }
                        else
                        {
                            ptr=start;
                            while(ptr!=NULL)
                            {
                                prev=ptr;
                                ptr=ptr->link;
                            }
                             prev->link=newnode;
                             newnode->link=NULL;
                        }
                    
         }


                     ptr=start;

                            while(ptr!=NULL)
                            {
                                    printf("\t%d",ptr->data);
                                    ptr=ptr->link;


                            }

                            return 0;
}