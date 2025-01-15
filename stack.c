#include <stdio.h>
#define MAX 100

int pop(int stack[MAX], int *top) {
    if (*top == -1) {
        printf("Underflow\n");
        return;
    } else {
        int item;
        item =stack[*top];
        return item ;
        
        *top=*top-1;
    }
}

void push(int stack[MAX], int *top, int size) {
    if (*top == size - 1) {
        printf("Stack Overflow\n");
        return;
    } else {
        int item;
        printf("Enter the item to push: ");
        scanf("%d", &item);
        *top=*top+1;
        stack[*top] = item;
    }
}

void display(int stack[MAX], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
 
    int stack[MAX];
    int size,item,top = -1, key;

    printf("Enter the size of stack: ");
    scanf("%d", &size);
    do {
        printf("Enter \n 1. PUSH\n 2. POP \n 3. DISPLAY\n 4. exit\n");
        scanf("%d", &key);

        switch (key) {
        case 1:
            push(stack, &top, size);
            break;
        case 2:
            item=pop(stack, &top);
            printf("%d",item);
            break;
        case 3:
            display(stack, top);
            break;
        case 4:
            break;
        default:
            printf("Invalid option\n");
            break;
        }
    } while (key != 4);

    return 0;
}