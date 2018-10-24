#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

typedef Struct Node{
  int data;
  struct Node *next;
  
}Node;




Node* distinct(Node* head) {
   
     Node *prev = head,*nn =head;
    
    int a[1002] = {0};
    
    a[nn->data]++;
    nn = nn->next;
    while(nn != NULL)
    {
        int idx =nn->data;
        a[idx]++;
        
        if(a[idx] > 1)
        {
            prev->next = nn->next;
            nn = nn->next;
        }
        else{
            
            prev = nn;
            nn = nn->next;
            
        }
        
    }
  return head;
}




