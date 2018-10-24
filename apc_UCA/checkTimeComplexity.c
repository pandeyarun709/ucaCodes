#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubbleSort(int *arr,int size)
{
  int i=0,j=0;
  for(i=1;i<size;i++)
  {
   for(j=0;j<size-i;j++)
   {
      if(arr[j]> arr[j+1])
       {
          int t = arr[j+1];
          arr[j+1]= arr[j];
          arr[j] = arr[j+1];
       }
    }
   }

}





int main()
{  
  FILE *f =  fopen("random.txt", "w"); ;
  int i,arr[16000];
  for(i=0;i<16000;i++)
   {   
       arr[i] = rand();
     //fprintf(f,"%d\n",rand());
   }
    
   int j=0;
   clock_t t1_start,t1_end;
    
   t1_start = clock(); 
    bubbleSort(arr,16000); 
   t1_end = clock();

   double t1_diff = t1_end-t1_start;

   for(i=0;i<16000;i++)
      fprintf(f,"%d\n",arr[i]);

// printf("%lu",t1_end-t1_start);
   int arr2[32000];   
   for(i=0;i<32000;i++)
   {
       arr[i] = rand();
     //fprintf(f,"%d\n",rand());
   }
 
   
   clock_t t2_start,t2_end;

   t2_start = clock();
    bubbleSort(arr2,32000);
   t2_end = clock();   
  
   double t2_diff = t2_end-t2_start;
  
 printf("\n %lf \n",(t2_diff/t1_diff));
}
