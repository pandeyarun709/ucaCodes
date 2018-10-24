#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int * lpsTable(char *str)
{
  int *lps = (int *)calloc(strlen(str),sizeof(int));
  int size = strlen(str);

  int i=0,j=0;
  
  while( j<strlen(str) )
  {
    if( str[i] == str[j])
    {
      lps[j] = i+1;
       i++;
       j++;
    }
    else if(i == 0)
     {
       lps[j] = 0;
       j++;
     }
    else {
       
        i = lps[i-1]; //moving i to backward direction
     } 
  }

 for(i=0;i<size;i++)
      printf("%d ",lps[i]); 

   
  return lps;
}

int searchString(char *txt, char *pat)
{
   int *lps = lpsTable(pat);
   return 1;  
}


int main()
{

   char *txt = "abxabcabcabydabcabyx";
   char  *pat = "abcabyx";


   int res =  searchString(txt,pat);


}
