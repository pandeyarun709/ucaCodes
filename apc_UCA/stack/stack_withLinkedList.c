#include<stdio.h>
#include<stdlib.h>



typedef struct Node{

   int data;
   struct Node *next;

}Node;

typedef struct Stack{

    
  struct Node *top;

}Stack;




/*void initialize(Stack *m,int size)
{


  m->arr = (int *)malloc(sizeof(int) * size);
  m->top = -1;


}*/

Node * createNode()
{
   Node *nn = (Node *)malloc(sizeof(Node));
   nn->next = NULL;
   
}

Stack * createStack()
{
  Stack *s = (Stack *)malloc(sizeof(Stack));
  s->top = NULL;
  return s;
}


int isEmpty(Stack *m)
{
  if(m->top == NULL)
       return 1;
   return 0;
}

int top(Stack *stk)
{
   if(stk->top != NULL)
        return stk->top->data;
   
    return -999;

}




void push(Stack *stk,int data)
{
     Node *nn = createNode();
     nn->data = data;

    if(nn != NULL)
    {
         nn->next =  stk->top;
        stk->top = nn; 

    }
 
   


}

void pop(Stack *stk)
{
   if(isEmpty(stk) != 1)
   {
        Node *t = stk->top;
         stk->top = stk->top->next;
         free(t);     
    
   }
 

}
/*####################### stack functions ################*/



int main()
{

  Stack *s = createStack();
  
  int a[7] = {100, 65 , 70, 60 , 75 , 84 ,101}; 

  
   int i=0,max=-1;
   
  for(i=0;i<7 ;i++ )
   {
        if(isEmpty(s) == 1 || a[i]<= a[top(s)] )
              push(s,i);
        
         else {

              while(!isEmpty(s) && a[i] >= a[top(s)])
               {
                  pop(s);
               }
              
              if(isEmpty(s) )
                 {
                    max = i+1;
                 }
                
               else if(max < (i - top(s)) )
                          max = i -top(s);

                            
              push(s,i);
           }

   }

  printf("Max = %d ",max);




}



