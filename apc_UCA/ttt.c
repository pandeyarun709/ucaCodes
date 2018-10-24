#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int k;
typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}Node;



Node* newNode(){
       Node *nn = (Node*)malloc(sizeof(Node));
        nn->left = NULL;
        nn->right = NULL;
        return nn;
}



Node* createBinary(Node *root, int d)
{
    if( root == NULL)
    {
       Node* nn = newNode();
        nn->data = d;
       
        
        return nn;
        
    }
     if(d < root->data)
    {
        root->left = createBinary(root->left, d);
    }
    else 
    {
        root->right = createBinary(root->right,d);
    }
    return root;
}


void preOrder(Node *root, int *a)
{
    if(root == NULL)
    {
         return;
    }
    
   // printf("%d ",root->data);
    a[k++] = root->data;
   
    preOrder(root->left,a);
    preOrder(root->right,a);
    
  
}


int main() {
 int t;
  scanf("%d",&t);  
 while(t--)
 {
     Node *root = NULL;
    
    int n;
     
    scanf("%d",&n);
       int a[n];
      int pre[n]; 
    int i=0;
    
    for(i=0;i<n;i++)
    {
        int num = 0;
        scanf("%d",&num);
        a[i] = num;
       root =  createBinary(root , num);
    }
   k=0;
    preOrder(root, pre);
    
     
     for(i=0;i<n;i++)
     {
          if(a[i] != pre[i])
              break;
     }
     if(i==n)
         printf("YES\n");
     else printf("NO\n");
     
 
 }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
