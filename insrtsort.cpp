#include<stdio.h>
#define MAXSIZE 100
main()
{
  int DATA[MAXSIZE],N,t,i,p;

  printf("Enter how many element you want?:");
  scanf("%d",&N);

  printf("Enter %d elements:-",N);
  for( i=0;i<N;i++)
  scanf("%d",&DATA[i]);

  for(int j=1;j<N;j++)
  {
    t=DATA[j];
    for(p = j-1;p>=0 && t < DATA[p];p--)
    {
      DATA[p+1] = DATA[p];
    }
    DATA[p+1]=t;
  }
  printf("Array elements are as follows :");
  for(i=0;i<N;i++)
  printf("%d  ",DATA[i]);



}
