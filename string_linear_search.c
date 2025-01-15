#include<stdio.h>
#include<string.h>
int main()
{
   char item[100];
    char arr[]="samyak";

    printf("enter the name to find:");
    scanf("%s",&item);

        
        for (int i = 0; i < 29; i++)
        {
            if(strcmp(arr[i],item)==0)

            {
                printf("found at %d",i);
            }
        }
       
       
       
        return 0;
   



}

