#include <stdio.h>
#include<stdlib.h>
/* Include other headers as needed */
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
     int r1 , c1 ;
   printf(" enter the row and col = " );
    scanf("%d %d",&r1,&c1);
    int **m1 = (int **)malloc(sizeof(int *) * r1);
    int i=0,j=0;
    for(i=0;i<r1;i++)
    {
      m1[i] = (int *)malloc(sizeof(int) * c1);
      for(j=0;j<c1;j++)
      {
         printf("enter value = ");
         scanf("%d",&m1[i][j]);
      }
    }
/*############### printing ############*/

    for(i=0;i<r1;i++)
    {
       for(j=0;j<c1;j++)
       {
          printf("%d ",m1[i][j]);
       }
      printf("\n");
    }






      int r2 , c2 ;
   printf(" enter the row and col = " );

    scanf("%d %d",&r2,&c2);
    int **m2 = (int **)malloc(sizeof(int *) * r2);
     for(i=0;i<r2;i++)
    {
      m2[i] = (int *)malloc(sizeof(int) * c2);
      for(j=0;j<c2;j++)
      {
         printf("enter value = ");

         scanf("%d",&m1[i][j]);
      }
    }

/*############### printing ############*/

    for(i=0;i<r1;i++)
    {
       for(j=0;j<c1;j++)
       {
          printf("%d ",m1[i][j]);
       }
      printf("\n");
     }
    int k=0;
   int  res_r = r1,res_c = c2; 
//    int **res = (int **)calloc(res_r,sizeof(int *));
  int res[res_r][res_c];  
  for(i=0;i<res_r;i++)
    {
        //res[i] = (int *)calloc(res_c,sizeof(int));
        res[i][j] = 0; 
        for(j=0;j<res_c;j++)
        { 
           for(k=0;k<c1;k++)
           {
             res[i][j] = res[i][j] + (m1[i][k] * m2[k][j]); 
           }
   	}
    }
    for(i=0;i<res_r;i++)
    {
       for(j=0;j<res_c;j++)
       {
          printf("%d ",res[i][j]);
       }
      printf("\n");
    }

  
 }   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 
}

