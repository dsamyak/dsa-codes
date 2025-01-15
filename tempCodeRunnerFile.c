#include<stdio.h>
int main ()
{
    int a,b,sum,sub,multiply;
    float divide;

    printf("enter the value of a and b :");
    scanf("%d %d",&a,&b);

    sum=a+b;
    sub=a-b;
    multiply=a*b;
    divide=a/b;

    printf("sum=%d",sum);
    printf("sub=%d",sub);
    printf("multiply=%d",multiply);
    printf("divide=%f",divide);

    return 0;
}