#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
  int data;
  struct Node *next; 
}Node;

void insert(Node **head,int num)
{
  
}

int main()
{
  Node *head = NULL;
  
  insert(&head,1);
  insert(&head,2);
  insert(&head,3);
  insert(&head,4);
  insert(&head,5);
}
