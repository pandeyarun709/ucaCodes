#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
  
   int data;
   struct Node *next;

}Node;



typedef struct Stack{
   
  Node *top;

}Stack;


void push(Stack *s , int data)
{

    Node *nn = (Node *)malloc(sizeof(Node));

}





