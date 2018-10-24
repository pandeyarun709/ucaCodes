#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct TrieTree{
   struct TrieTree *arr[26];
   int isEndOfWord;

}Trie;


Trie* createNode()
{
  Trie *nn = (Trie *)malloc(sizeof(Trie));
  int i=0;
  for(i=0;i< 26;i++)
  {
     nn->arr[i] = NULL;
  }
  nn->isEndOfWord = 0;
  return nn;
}

void insert(Trie *curr ,  char str[])
{
  int i=0;
  for(i=0;i< strlen(str) ;i++)
  {
    if( curr->arr[ str[i] - 'a'])
    {
      curr = curr->arr[ str[i]- 'a'];
      
    }
    else{
      Trie *nn = createNode();
       curr->arr[str[i] - 'a'] = nn;
       curr = nn; 

     }


  }
  curr->isEndOfWord = 1;
}

char* search(Trie * curr, char *s)
{
   int i=0;
   Trie *prev =NULL;
   for(i=0;i< strlen(s);i++)
   {
       if( curr->arr[s[i] - 'a'])
       {
          prev = curr;
          curr = curr->arr[s[i] -'a'];
       } 
    
   }
  if(i==  strlen(s) &&  curr->isEndOfWord == 1)
    return "yes\0";
  else return "NO\0";

}

int main()
{
  int i=0;
  
  char str[50];
  Trie *root = createNode();
   for(i=0;i<5;i++)
   {
     printf("Enter the string \n");
      scanf("%s",str);
      insert(root,str);
   }

   char s[4];
      printf("Enter the string \n");
      scanf("%s",s);

   do{

      strcpy(s,search(root,s));
      printf("%s\n",s);
      printf("Enter the string \n");
      scanf("%s",s);

     }while(strcmp(s,"no") != 0); 

}



