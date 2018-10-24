#include<iostream>

#include<stdlib.h>
#include<queue>
#include<stack>
#include<vector>


using namespace std;

typedef struct Root{
  int data;
  struct Root *left;
  struct Root *right;

}Root;


Root * createRoot()
{
   Root *nn = (Root *)malloc(sizeof(Root));
   // nn->data = -1;
    nn->left = NULL;
    nn->right = NULL;
   return nn;
}


/*################# level order insertion ##########*/
void insert(Root **root,int data)
{   
   queue<Root *> q;   
   Root *nn = createRoot();
   nn->data = data;
   if(*root == NULL)
    {   
        *root = nn;
         return;
     }      
    
  if(*root != NULL)
      q.push(*root);

  while(1)
  {
     Root *n = q.front();
    // if(!q.empty())
    //  cout<<q.front()->data<<endl;

    if(n->left == NULL)
     {
         n->left = nn;
       return;
     }

    if(n->right == NULL)
    {
       n->right = nn;
       return;
    }

    q.push(n->left);
    q.push(n->right);

     q.pop();
  }


}


/* not becuse root value not get update

void insert(Root *head //not this becuse maintaining address in global queue,int data)
{
     //Root *root = head;
     Root *nn = createRoot();
     nn->data = data;
    
     queue<Root *> q;  
     if(head== NULL)
     {
   
       cout<<"insert root null"<<endl;
       // head = createRoot();
        head = nn;
        return; 
     }

  if(head != NULL)
      q.push(head);
     
  while(1)
  {
     Root *n = q.front();
     if(!q.empty())
     cout<<q.front()->data<<endl;

    if(n->left == NULL)
     {
         n->left = nn;
       return;   
     }

    if(n->right == NULL)
    {
       n->right = nn;
       return;
    }
    
    q.push(n->left);
    q.push(n->right);
  
     q.pop();
  }
}
*/ 
/*##################### inorder recursively #######*/
void printInoder(Root *root)
{
  if(root == NULL)
    {
     // cout<<"root null"<<endl;
      return;
    }
  printInoder(root->left);
  cout<<"  "<<root->data<<" ";  
//printf("%d ",root->data)
  printInoder(root->right); 
}

/* ################# inorder itreative #######*/

vector<int> inorder(Root *root)
{
   stack<Root *> stk;
   vector<int> v;

   while(1)
   {
      while(root != NULL)
      {
         stk.push(root);
 	 root = root->left;
      }

      if(stk.empty())
          return v;
    
      Root *nn = stk.top();
      stk.pop();      
      v.push_back(nn->data);
     	 
      root = nn->right;  
   }  
}




int main()
{
  Root *root =NULL;// createRoot();
        //root = NULL;

  insert(&root, 1 );
  
  insert(&root, 2 );
  insert(&root, 3 );  
  insert(&root, 4 );
  insert(&root, 5 );
  insert(&root, 6 );
  insert(&root, 7);


  printInoder(root);  
  cout<<endl;
  vector<int> v = inorder(root);
  
  int i=0;
  
  for(i=0;i<v.size();i++)
      cout<<" "<<v[i]<<"  ";
 cout<<endl;

}





