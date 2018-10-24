#include<stdio.h>
#include<stdlib.h>



typedef struct node
{
    int data;
    int val;
    struct node* left;
    struct node* right;
    
}node;

typedef struct stack
{
    node* arr[100];
    int top;
}stack;

void push( stack* obj,node* root)
{
    obj->top = obj->top + 1;
    obj->arr[obj->top] = root;
    
}

node* pop(stack* obj)
{
    if(obj->top == -1)
        return NULL;
    node* temp = obj->arr[obj->top];
    obj->top = obj->top-1;
    return temp;
}
int isEmpty(stack* obj)
{
    if(obj->top == -1)
        return 1;
    return 0;
}

node* createBinary(node* root, int d, int v)
{
    if( root == NULL)
    {
        node* nn = (node*)malloc(sizeof(node));
        nn->data = d;
        nn->val = v;
        nn->left = NULL;
        nn->right = NULL;
        return nn;
    }
    else if(d < root->data)
    {
        root->left = createBinary(root->left, d, v-1);
    }
    else
    {
        root->right = createBinary(root->right,d, v+1);
    }
    return root;
}
/* ####################### Top view ################*/
void topView(node *root)
{
   stack *s = (stack *)malloc(sizeof(stack));

    int *arr =(int*)calloc(sizeof(int) ,101);
    const int pos = 50;
    
   s->top = -1;
   
   push(s,root);
   
 

     while(!isEmpty(s)) 
     {
          node *nn = pop(s);
          
          if( arr[pos + nn->val] == 0 ) 
             arr[pos + nn->val] = nn->data;
           
          if(root->left != NULL)
              push(s,root->left);

          if(root->right != NULL)
            push(s,root->right);

     }

  printf("top view : \n");
   int i=0;
  for(i=0;i<101;i++)
  {
     if(arr[i] !=0)
        printf("%d ",arr[i]);
  } 

}



int main() {
    
   node *root = NULL;


   int n;
    
    scanf("%d",&n);
    int i=0;
    
//    int num;

    int *a = (int*)malloc(sizeof(int)* n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        root =  createBinary(root,a[i],0); 
     }  
        
     topView(root);

    //complete this function
    return 0;
}
