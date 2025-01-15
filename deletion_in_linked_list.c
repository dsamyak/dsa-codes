#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

        void at_beg(struct node **start)
           { 
                struct node*temp;
                temp=*start;
                *start=temp->link;
                
                
           }

        void diplay(struct node **start)
           {
                struct node  *ptr;
                 ptr=*start;

                            while(ptr!=NULL)
                            {
                                    printf("\t%d",ptr->data);
                                    ptr=ptr->link;


                            }

          }

        void at_end(struct node **start)
        {
                struct node *ptr, *prev;
                
                ptr=*start;

                            while(ptr->link!=NULL)
                            {
                                    prev=ptr;
                                    ptr=ptr->link;

                            }
                            prev->link=NULL;
                            
        }

        void at_loc(struct node **start)
        {

               struct node *ptr, *prev; 
                int key1;
                            
                            printf("Enter the data which you want to delete:");
                            scanf("%d",&key1);

                           ptr=*start;
				while(ptr!=NULL)
				{
					prev=ptr;
					ptr=ptr->link;
					if(key1==prev->data)
					{
						prev->link=ptr->link;
						prev=ptr->link;
					         break;				
					}
			
				}
        }

int main()
{
        struct node *start=NULL;
        struct node *ptr;
        struct node *newnode;
        struct node *prev, *temp;
        int n,loc,key;

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

                            
               
           do
           {

                 printf("\nEnter your choice for operation :\n1.DELETE AT BEGIN:\n2.DELETE AT END \n3.DELETE AT LOCATION \n4.EXIT\n");
                 scanf("%d", &key);
                 
                        switch (key)
                        {

                        case 1:
                                printf("\nAfter deleting node on beg");
                                at_beg(&start);
                                diplay(&start);
                                break;
                        
                        
                        case 2:
                                printf("\nAfter deleting node on end");
                                at_end(&start);
                                diplay(&start);
                                        break;
                        
                        case 3:
                                
                                at_loc(&start);
                                printf("After deleting node \n");
                                diplay(&start);

                                break;

                        case 4:
                                break;

                        } 
           }
           while(key!=4);            



return 0;

}