#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
        int data;
        struct node *next ; 
};

struct node *head = NULL;


struct node * createNode()
{
	struct node * new = (struct node *)malloc(sizeof(struct node));
} 


/*################################ insert at  first ####################*/
void insertFirst(int x)
{
	struct node *curr = (struct node *)malloc(sizeof(struct node));
	if(head != NULL)
	{
	//	printf("   head = %d",head);
	//	printf("   curr = %d",curr);
		curr->data = x;
		curr->next = head;
	//	printf("  curr_next = %d",curr->next);
		head = curr;
	//	printf("   head = %d",head);
        

	}
	else {
		
		 head = (struct node *)malloc(sizeof(struct node));
	//printf("head = %d ",head);
		curr->next = NULL;
		curr->data = x;
		
		head = curr;
		
	//	printf("   head = %d",head);
	//	printf("  curr = %d",curr);
	}

}


/* ######################## insert at last ######################*/
void insertLast(int x)
{

    struct node *curr = (struct node *)malloc(sizeof(struct node));
    struct node *nn = (struct node *)malloc(sizeof(struct node));
        curr->next = head;

        while(curr->next)
        {

          curr = curr->next;
        }

        curr->next = nn;
        nn->data = x;
        nn->next = NULL;
}
//-------------recursive code at insert at last----------------

struct node * insertAtEndRec(struct node *temp ,int data)
{
	if(temp == NULL)
        {
	  temp = (struct node *)malloc(sizeof(struct node));
	  temp->next = NULL;
	  temp->data = data;
          return temp;		

	}
      temp ->next = insertAtEndRec(temp->next,data);
}	

/*############################### insert at index ####################*/
void insertAt(int x,int index)
{
        struct node *curr = (struct node *)malloc(sizeof(struct node));
        curr->next = head;
        int i=0,flag=0;
        if(head != NULL)
        {
		         while(i< index && curr )
		         {
		         	if( !(curr->next)) //checking validity of index
		         	{
		         		if(index - i >1)
		         		    flag = 1;
					 }
		           curr = curr->next;
		           i++;
		
		         }
		         
		         if(flag==0)
		         {
		         	if(curr == NULL)
		         	{
		         		insertLast(x);
		         		//break;
					 }
		
			          struct node *nn = (struct node *)malloc(sizeof(struct node));
			          nn->next = curr->next;
			          curr->next = nn;
			          nn->data = x;
				 }else printf("\nInvalid index plz enter index less than size of list");
	         
        }else insertFirst(x);

}

/*############################## print List ########################*/
void print()
{
        struct node *n = head;
      //  n = head;
        while(n!= NULL)
        {
          printf("%d ",n->data);
          n = n->next;
        }

}

/*############## delete last #####################*/ 
void deleteLast()
{
	if(head != NULL)
	{
			struct node *curr = (struct node *)malloc(sizeof(struct node));
			curr = head;
			
			while(curr->next->next)
			{
				curr = curr->next;
			}
			
			curr->next = NULL;
			
			printf("\nLast element Deleted");
		
		
	}else 	printf("\nList is empty!!!");

}

// -----------------through reccursion delete at last---------------
void deleteAtLastRecursive(struct node *temp)
{
  if(temp->next->next == NULL)
   {
      temp->next = NULL;
     return;
    }		
     deleteAtLastRecursive(temp->next);    
	
}


/*########################## delete first #########################*/
void deleteFirst()
{
	if(head != NULL)
	{
		struct node *curr = (struct node *)malloc(sizeof(struct node));
	
		curr = head;
		
		head = curr->next;
		
		printf("\nFirst element Deleted");
		
	}else 	printf("\nList is empty!!!");
	
}



int  printReverse(struct node *curr)
{
	if(curr == NULL)
    {
    	return  1;
    	
	}
	else{
		
		printReverse(curr->next);
		
		printf("%d ",curr->data);
		
		
	}
}

void reverseLinkList()  // swaping the address or changing direction of pointing
{
	struct node *curr =head;
	struct node *prev = NULL;
	while(curr != NULL)
	{
		struct node *nextptr = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nextptr; 
	}
}




/*---------------------------------int main--------------------*/

int main()
{
	printf("enter the 1 insert at first\n");
    printf("enter the 2 print the list\n");
    printf("enter the 3 insert at last\n");
    printf("enter the 4 insert at index\n");
    printf("enter the 5 delete at last\n");
    printf("enter the 6 delete at first\n");
    printf("enter the 7 delete at index\n");
    printf("enter the 9 delete at last recursive\n");
    
        int t=0;
         printf("enter your option = ");
         scanf("%d",&t);

        while(t!=-1)
        {
                switch(t)
                {
                  case 1:{
                           int data;
                           printf("enter the data = ");
                           scanf("%d",&data);
                           insertFirst(data);
                           break;
                        }
                  case 2:{
                          // int data;
                           printf("Data in List :");
                           //scanf("%d",&data);
                           print();
                           break;
                        }
                  case 3:{ int data;
                  			printf("enter the data = ");
                             scanf("%d",&data); 
                             insertLast(data);
							break;
				       }
				 case 4:{
				 			 int data,idx;
                  			printf("enter the data = ");
                             scanf("%d",&data); 
                             printf("enter the index = ");
                             scanf("%d",&idx);
                             insertAt(data,idx);
				 		  	
						  break;
					   }
				 case 5:{
				 	    deleteLast();
					    break;
				      }
				 case 6:{
				 	     deleteFirst();
				 	     
					    break;
				      }
				  case 7:{
				  	     int idx;
				  	     printf("enter the index which want to delte = ");
                             			scanf("%d",&idx);
							//tbgggggtgt6hyy
							// deleteAt(idx);  
					    break;
				     } 
				  case 8:{
				  	   //swapAjacent();
					   break;
				       }
				  case 9:{
						//struct node *temp = createNode();
					   deleteAtLastRecursive(head);
						break;	     
                                        }
				   case 10:{
                                             int idx;
                                             printf("enter the number = ");
                                                scanf("%d",&idx);

						head->next = insertAtEndRec(head->next,idx);		
					}
				   case 11:{
						reverseLinkList();
					}			
			}
              printf("\nenter your option = ");
              scanf("%d",&t);   
       }
}
