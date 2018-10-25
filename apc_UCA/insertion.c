#include<stdio.h>
#include<stdlib.h>


typedef struct Tree{
  int data;
  struct Tree *left;
  struct Tree *right; 

}Root;


Root * newNode(int d)
{
  Root *nn = (Root *)malloc(sizeof(Root));
   nn->data = d;
   nn->right = NULL;
   nn->left = NULL;
 
   return nn;
}

Root * insertBinarySearchTree(Root * root , int item)
{
  if(root == NULL)
  {

    Root * nn = newNode(item);
    	
    return nn; 
  }
   else  if( item < root->data)
       root->left = insertBinarySearchTree(root->left , item);
      
	 else    root->right = insertBinarySearchTree(root->right , item);
 
   
   return root;
   

}


void inorder(Root *node)
{
	if(node == NULL)
	    return;
	    
	inorder(node->left);
	  printf("%d ",node->data); 
	inorder(node->right);     
}

int main(){
	
	Root *root= NULL ;

	int arr[8]  ={6,7,8,9,1,4};
	int i=0;
	for(i=0; i<8;i++)
	   {
	   	   root = insertBinarySearchTree( root , arr[i]);
	   	    
	   	  
		}
	    
	inorder(root);    
}


