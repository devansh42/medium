#ifndef STACK_H
    #define STACK_H
    
    /**
     * Defination of Basic Stack Structure
     */
    typedef struct 
    {   
        //size of stack
        int size; 
      
        //capacity of queue
        int cap;
        //array to store are stack
        int* ar;    

    } BasicStack;
    
    /**
     * This function returns pointer to basic stack structure
     * cap, is the capacity of stack
     */
    BasicStack* new_basic_stack( int cap);

    /**
     * This function pushes an element in BasicStack, return 1 if succeed
     * returns 0 if failed (Stack Overflow)
     */
    int push_basic_stack(BasicStack*,int element);

    /**
     * This function pops out an element in BasicStack, returns poped element
     */
    int pop_basic_stack(BasicStack*);

    /**
     * This function deletes, basic stack structure and deallocates memory associated with them
     */
    void delete_basic_stack(BasicStack*);



    #endif