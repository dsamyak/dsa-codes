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

    printf("sum=%d\n",sum);
    printf("sub=%d\n",sub);
    printf("multiply=%d\n",multiply);
    printf("divide=%f\n",divide);

    return 0;
}