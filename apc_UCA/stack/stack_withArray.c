#include<stdio.h>
#include<stdlib.h>


typedef struct Stack{

  int *arr;
  int  top;

}Stack;

void initialize(Stack *m,int size)
{
  
   
  m->arr = (int *)malloc(sizeof(int) * size); 
  m->top = -1;
  

}

int isEmpty(Stack *m)
{
  if(m->top == -1)
       return 1;
   return 0;
}

int isFull(Stack *m , int s)
{

  if(m->top == s-1)
      return 1;
 
   return 0;

}

void insertData(Stack *m,int data , int size )
{
  if(isFull(m,size) != 1 )
   {
     m->top++;
     m->arr[m->top] = data;
   } 
   

}

int deleteData(Stack *m)
{
   if(isEmpty(m) != 1)
   {  
      int x = m->arr[m->top];
      m->top--;
      return x;
   }
   printf("Stack is empty");
   return -1; 

}

int main()
{

  Stack *s = (Stack *)malloc(sizeof(Stack)); 
   initialize(s,10);
   
   if(isEmpty(s))
    {
       printf("Stack is empty\n");
    }else printf("STack is not empty\n");

   insertData(s,12,10);
   insertData(s,45,10);
   insertData(s,95,10);
   
      if(isEmpty(s))
    {
       printf("Stack is empty\n");
    }else printf("STack is not empty\n");

    int d = deleteData(s);
     printf("%d \n",d);

     d = deleteData(s);
     printf("%d\n",d);



}






