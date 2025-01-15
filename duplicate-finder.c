#include<stdio.h>

int arr[]={1,2,2,2,3,4,4,5,4,5,6};

int main()
{
  int size=sizeof(arr)/sizeof(arr[0]),count;
  for(int i=0;i<size;i++)
  {   
    count=0;
    for(int j=1;j<size;j++)
    {
      if(arr[j]==arr[i])
     {
        count++;
        if (arr[i]!=arr[i-1])
        {
          printf("\n%d repeats %d times\t",arr[i],count);
        }
     }
    }
}
return 0;

}