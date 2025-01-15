#include<stdio.h>
#define MAX 100
void push( char item, int *top, int stack[MAX]  ,int size) {
    if (*top == size - 1) {
        printf("Stack Overflow\n");
        return;
    } else {
        
        *top=*top+1;
        stack[*top] = item;
    }
}

void pop(int stack[MAX], int *top) {
    if (*top == -1) {
        printf("Underflow\n");
        return;
    } else {
        printf("Popped: %d\n", stack[*top]);
        *top=*top-1;
    }
}
int main()
{
  char arr[]={"((()))"};
   int size=sizeof(arr)/sizeof(arr[0]);
  char stack[MAX];
  int i,top=-1;

 for(int i=0;i<size;i++)
 {
    if(arr[i]==arr[0])
    {
        push(arr[i],&top,stack,size);
    }
    else 
    {
        pop(stack,&top);
    }

 }
 if(top==-1 && i==size)
 {
        printf("balanced");
 }
 else{
    printf("not balanced");
 }
}