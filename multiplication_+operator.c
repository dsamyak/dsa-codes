#include<stdio.h>

int mul(int small,int greater)
{
    int count=0;
   for(int i=1;i<=greater;i++)
   {
        count=small+count;
   }
    return count;
    
}
int main()
{
    int a,b,result;

    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    
    if(a<b)
    {
        result=mul(a,b);
        printf("%d",result);
    }
    else
    {
        result=mul(b,a);
         printf("%d",result);
    }
}