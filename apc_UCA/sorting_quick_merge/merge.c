#include<stdio.h>
#include<stdlib.h>



void merge(int *a,int *aux,int l,int mid,int r)
{
  int i = l, j=mid+1,k=l;
  
  for(k=l;k<=r;k++)
  {
    if(i>mid) aux[k] = a[j++];
    else if(j>r) aux[k] = a[i++];
    else if(a[i] > a[j])  aux[k] = a[j++];
    else  aux[k] = a[i++]; 
  }
  
  for(k=l;k<=r;k++)
  {
    a[k]= aux[k];
  }
}


void mergeSort(int *a,int *aux,int left,int right)
{

   if(left<right)
   {
     int mid =(left+right)/2;

      mergeSort(a,aux,left,mid);
      mergeSort(a,aux,mid+1,right);
 
      merge(a,aux,left,mid,right); 
   }


}


int main()
{
   int size;
   int *a,*aux;
   scanf("%d",&size);   
   a = (int *)malloc(sizeof(int)* size);
   aux = (int *)malloc(sizeof(int)*size);

   int i=0;
  
   for(i=0;i<size;i++)
      scanf("%d",&a[i]);

    mergeSort(a,aux,0,size-1);


   for(i=0;i<size;i++)
      printf("%d ",a[i]);

    


}
  
