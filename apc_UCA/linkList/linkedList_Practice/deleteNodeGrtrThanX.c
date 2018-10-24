#include<stdio.h>
#include<stdlib.h>



Node* removeNodes(Node* listHead, int x) {
    
    SinglyLinkedListNode* head = listHead;
    while(listHead!= NULL && listHead->data > x)
    {
         listHead = listHead->next;
    }
     SinglyLinkedListNode *prev = listHead;
     head = listHead;
     listHead = listHead->next;
   
       while( listHead != NULL )   
       {
           if(listHead->data >x )
           {
               
               prev->next =  listHead->next;
               listHead = prev->next;
                 
            }
           else{
               prev = listHead;
             listHead = listHead->next;
           }
           
           
           
           
           
       }
     if(listHead != NULL)
     {
         if(listHead->data > x && listHead->next == NULL)
             prev->next = NULL;
     }
    listHead = head;
    return listHead;

}

Node insertAtFirst(Node *head)
{
  int item;
  scanf("%d",&item);

  for(i=0;i<item;i++)
  {
      scanf("%d",&k);
      
      if(start == NULL)
      {
          start = (struct node *)malloc(sizeof(struct node));
          
          start->info = k;
          start->link = NULL;
      }
      else{
          ptr = (struct node *)malloc(sizeof(struct node));
          ptr->info = k;
          ptr->link  = start;
          start = ptr;
      }
  }

}
