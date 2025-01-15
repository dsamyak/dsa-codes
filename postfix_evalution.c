#include<stdio.h>
#define MAX 100
int top=-1,stack[MAX];
char arr[MAX];
int pop()
{
    if(top==-1)
    {
        printf("Underflow");
        return-1;
    }
    else
    {
        return stack[top--];

    }
}
void push(int i)
{
    
    stack[++top]=i;
}
int main()
{
    
    

    char arr[9]={"1""3""2""*""8""5""*""-""+"};

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
    if(arr[i]=='+')
    {
        int a = pop();
        int b = pop();
        int c = b + a;
        push(c);
    }
    else if(arr[i]=='-')
    {
        int a= pop();
        int b= pop();
        int c= b-a;
        push(c);
    }
        else if(arr[i]=='*')
    {
        int a= pop();
        int b= pop();
        int c= b*a;
        push(c);
    }
        else if(arr[i]=='/')
    {
        int a= pop();
        int b= pop();
        int c= b/a;
        push(c);
    }
    else
    {
            push(arr[i] - '0');
    }
    }

    printf("result: %d",stack[top]);
    
}