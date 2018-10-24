#include<stdio.h>
#include<stdlib.h>

int swap(int *a,int i,int j)
{
  int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
}


void quickSort(int *a,int left,int right)
{
  int pivot = left;

  int j=left,i=0;
  
 if(left<right)
 {   
   for(i=left+1;i<=right;i++)
   {
     if(a[i] < a[pivot])
        swap(a,i,++j);

   } 

   swap(a,j,pivot);
    //pivot = j;  
   quickSort(a,left,j-1);
   quickSort(a,j+1,right);
 }   


}


int main()
{

  int size;

  scanf("%d",&size);

  int *a = (int *)malloc(sizeof(int) * size);
  int i=0;

  for(i=0;i<size;i++)
      scanf("%d",&a[i]);

  quickSort(a,0,size-1);

  for(i=0;i<size;i++)
      printf("%d",a[i]); 
   


}

