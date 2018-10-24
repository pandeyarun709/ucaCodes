#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int binarySearch(int *arr,int left,int right,int num)
{
  int mid = (left + right)/2;

  if(arr[mid] == num)
      return mid;
  
  else if(arr[mid] > num)
          return binarySearch(arr,left,mid-1,num);
  
  else if(arr[mid] < num)  
         return binarySearch(arr,mid+1,right,num);
  
  else return -1;
}

int main()
{
  int size,i=0,num;
  scanf("%d",&size);
  int *arr = (int *)malloc(sizeof(int) * size);
 
  for(i=0;i<size;i++)
  {
    printf("Enter the value = ");
    scanf("%d",&arr[i]);
  }
 
  printf("Enter value you want to search = ");
  scanf("%d",&num);  
  
  int idx = binarySearch(arr,0,size-1,num); 
  
   if(idx>=0)
       printf("\nsearched value %d is at index %d \n",arr[idx],mid);
   
   else printf("\nNo such value exist\n"); 
 
}
