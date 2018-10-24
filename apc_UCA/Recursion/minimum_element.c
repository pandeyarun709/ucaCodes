#include<stdio.h>
#include<stdlib.h>

int minElement(int *arr,int i,int element)
{
   if(i<0)
      return element;
   else{
         if(arr[i]<element)
          {
             element = arr[i];
           }
         return minElement(arr,i-1,element);
       }
  
}

int main()
{
  int size,i=0;
  printf("enter the size = ");
  scanf("%d",&size);
   
  int *arr = (int *)malloc(sizeof(int)*size);
  
  for(i=0;i<size;i++)
  {
    printf("enter the value = ");
    scanf("%d",&arr[i]);
  } 

  int min = minElement(arr,size-1,arr[0]);
  printf("Minimum element = %d\n",min);  



}
