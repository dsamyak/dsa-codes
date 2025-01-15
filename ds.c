#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int data[MAXSIZE],N;
int search(value){
    int loc=-1,i;
    for(i=0;i<N;i++){
        if(value == data[i]){
            loc=i;
            break;
        }
    }
    return (loc);
}



int main(){
    system("cls");
    int op,ind,val,i;
    printf("How many numbers you want to store? : ");
    scanf("%d",&N);
    if(N>0 && N<100){

        printf("Enter array elements : ");
        for( i=0;i<N;i++)
        scanf("%d",&data[i]);

    do{
        system("cls");
    	printf("Enter 1 for INSERTION: \n");
        printf("Enter 2 for DELETION: \n");
        printf("Enter 3 for SEARCHING: \n");
        printf("Enter 4 for DISPLAY: \n");
        printf("Enter 5 for EXIT: \n");
	    scanf("%d",&op);

        switch(op){
            case 1 :
            printf("Enter index at which you want to insert an element: \n");
            scanf("%d",&ind);
            if(ind>=0 && ind<= N){
                printf("Element you want to enter at %d index: ",ind);
                scanf("%d",&val);

                if(ind == N){
                    data[N]=val;
                    N++;
                    printf("Insertion Susscessful\n");
                }else{
                    for(i=N-1;i>= ind;i--){
                        data[i+1]=data[i];
                        N++;

                    }
                    data[ind]=val;
                    printf("Insertion susscessful.");
                }


            }
                break;
            case 2 :
            printf("Enter element you want to delete: ");
            scanf("%d",&val);
            ind=search(val);
            if(ind== -1){
                printf("value not found , Can not be deleted !");
            }
            else{
                for(i=ind;i<N-1;i++){
                    data[i]=data[i+1];
                }
                printf("Element deleted succsesfuly");
                N--;
            }

            	break;
            case 3 :
            printf("Enter element you want to search : ");
            scanf("%d",&val);
            ind = search(val);
            if(ind == -1){
                printf("Value not found ! \n");
            }else {
                printf("%d foud at %d index\n",val,ind);
            }
            	break;
            case 4 :
            printf("Arrray elements are as follows : \n");
                for(i =0;i<N;i++){
                    printf("%d ",data[i]);
                }
            	break;
            case 5 :
                break;

            default: 
            printf("Enter valied option !\n");
            	break;



        }
	}
    while(op != 5);
    
    }
    else{
        printf("Invalid Input !");
    }

    
}
