#include<stdio.h>
#include<string.h>
#define MAX 100

int main()
{
    char item[20];
    char arr[MAX][MAX];
    int index, mid, end, beg, pos = -1, n;

    printf("Enter how many names you want to store: ");
    scanf("%d", &n);

    printf("Enter the %d names:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    printf("Enter name to find: ");
    scanf("%s", item);

    beg = 0;
    end = n - 1;

    while(beg <= end)
    {
        mid = (beg + end) / 2;
        if(strcmp(arr[mid], item) == 0)
        {
            pos = mid;
            break;
        }
        else if(strcmp(arr[mid], item) < 0)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if(pos != -1)
    {
        printf("Found at position %d\n", pos);
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}
