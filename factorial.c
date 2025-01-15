#include<stdio.h>
int factorotial(int fact)
{
    if(fact==1)
    {
        return fact;

    }
    else
    {
        return fact * factorotial(fact - 1);
    }
}
int main()
{
    printf("%d",factorotial(5));
}