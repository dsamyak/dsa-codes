#include<stdio.h>
int i=0;
int fabo(int fab)
{
    
    if(i<=fab)
    {
        return fabo(i)+i;
       
    }
    else
    {
         return 0;
       
    }
}
int main()
{
  
    printf("%d",fabo(6));
}