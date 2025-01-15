#include<stdio.h>
int main()
{
    int d=0,s=0,n,m;
    n=m=371;
    while(n>0)
    {
        d=n%10;
        d=d*d*d;
        s=s+d;

        n=n/10;
    }
    if(s!=m)
    {
        printf("not ");
    }
    else
    {
        printf("\nit is");
    }
    
}