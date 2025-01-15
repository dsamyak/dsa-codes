#include<stdio.h>
#define MAX 100
int arr[MAX];


int search(int size,int key)
{

for(int i=0;i<size;i++)
{

if(arr[i]==key)
{

 return i;
}

}
return -1;

};

int main()
{
int N,key,result,positon,flag;
printf("How many numbers you want to store:");
scanf("%d",&N);

printf("Enter %d elements in Array:",N);

for(int i=0;i<N;i++)
{

    scanf("%d",&arr[i]);
}

printf("Enter a number which you want to search:");
scanf("%d",&key);

result=search(N,key);

if(result==-1){ printf("Not found");}

else{printf("Found at %d",result);}



return 0;
}