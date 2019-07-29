#ifndef LINKED_H
    #define LINKED_H
    
    struct  Node;

    typedef struct Node Node;

    struct Node 
    {
        int value; //value will hold the value of our node
        
        Node* next;//will hold address of next node
    
    } ;

    
    


    typedef struct {
        int length; // holds number of elements in linked list

        Node* head; //holds address of first element of the linked list
        
        Node* tail; //holds address of last element of linked list

     

    } LinkedList;


    /**
     * This function returns a new linked list pointer
     */
    LinkedList* new_linked_list();

    /**
     * This function adds a new node at the end of the linked list
     * list, is the pointer towards are linked list instance
     */
    void push_list(LinkedList* list, int value); 
    
    /**
     * This function remove the node from the front of list, and returns value of the node,
     * if list is empty then it will return -1
     * list, is the pointer towards target linked list instance
     */
    int pop_list(LinkedList* list);
    
    /**
     * This function returns length of the list
     * list, is the pointer towards target linked list instance
     */
    int length_list(LinkedList* list);

    /**
     * This function deletes are list instance, deallocates memory
     */
    void delete_list(LinkedList* list);
    
    #endif