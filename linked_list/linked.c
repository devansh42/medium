#include "linked.h"
#include<stdlib.h>


LinkedList* new_linked_list(){
    LinkedList* x; //Declaring a new instance of linked list
    Node* n;//to do some temporary arrangements
    x=(LinkedList*)malloc(sizeof(LinkedList)); // allocating memory for the linked list 
  
    return x; //returing it back
}



 void push_list(LinkedList* list, int value){
     Node* n;

     n=(Node*)malloc(sizeof(Node)); //intializing new node
  
     n->value=value; //setting value of new node

     if(!list->tail){
         //It means we are pushing our first node, so intially header and tail node will be same
         list->head=n;
         list->tail=n;   
     }

      list->tail->next=n; //As tail points to the last element of the list, we will set new node as next element of tail element 
     
      list->tail=n; //As from the above statement n is our new tail, we set new node as tail of list
      


        list->length++; // Increasing length of list

    }
   
int pop_list(LinkedList* list){


    if(!list->head) return -1; //It means, linked list is empty
   
    int value;  //holds value of node

    value=list->head->value; //accessing node
    
    Node* head; //hold's address of the current header

    head=list->head; 
    
    list->head=list->head->next; //making new header, the next node to the previous header
    
    free(head); //freeing memory associated with previous header

    list->length--;// Decreasing length of linked list

    return value; //returning value of poped out node

}


int length_list(LinkedList* list){
        return list->length; //returning length of the linked list
}

void delete_list(LinkedList* list){

    Node* i;
    
    /**
     * Deallocating memory associated with each node
     * Starting from head node
     * Ends whenever we reach at the tail
     * We go to next node in each iteration
     */
    for(i=list->head;i!=list->tail;i=i->next){ //Traversing Linked List
        free(i); //Deallocatind memory of i'th node
    }


    free(list); //Freeing memory for LinkedList object

}
    