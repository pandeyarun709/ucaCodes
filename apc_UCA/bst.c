
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node{
    int data;
    struct Root *left;
    struct Root *right;
}Node;

Node* newNode(){
       Node* nn = (Node*)malloc(sizeof(Node));
        nn->left = NULL;
        nn->right = NULL;
        return nn;
}



Node* createBinary(Node* root, int d)
{
    if( root == NULL)
    {
        Node* nn = newNode();
        nn->data = d;
        return nn;
        
    }
    else if(d < root->data)
    {
        root->left = createBinary(root->left, d);
    }
    else 
    {
        root->right = createBinary(root->right,d);
    }
    return root;
}

int findMax(Node *root )
{
    while(root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

int findMin(Node *root)
{
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
    
}

int checkValid(Node *root , int min ,int max)
{
    if(root == NULL)
         return 1;
    if(root->data <= min || root->data >= max )
         return 0;
    
    return  ( checkValid(root->left, min, root->data) && checkValid(root->right,root->data , max) );
}


int main() {
 int t;
  scanf("%d",&t);  
 while(t--)
 {
     Node* root = NULL;
    
    int n;
    scanf("%d",&n);
    int i=0;
    
    for(i=0;i<n;i++)
    {
        int num = 0;
        scanf("%d",&num);
       root =  createBinary(root , num);
    }
    
    int min = findMin(root);
    int max = findMax(root);
    int f = checkValid(root,min,max);
 
 }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
