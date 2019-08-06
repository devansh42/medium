#include "stack.h"
#include<stdlib.h>

  BasicStack* new_basic_stack(int cap){
      BasicStack* s;
      
      //Allocating memory for Basic Stack Structure
      s=(BasicStack*)malloc(sizeof(BasicStack));
      //Allocating memory for Array used to hold stack
      s->ar=malloc(sizeof(int)*cap);
      //Setting capcity of stack
      s->cap=cap;
      //Setting intial size of stack
      s->size=0;
      return s;
  }

  int push_basic_stack(BasicStack* s,int element){
       if(s->size<s->cap){ //Check, if we really have the space

           int *ar;
           ar=s->ar;
           //Appending element to the stack
           *(ar+s->size)=element; 
            s->size++;
          return 1;
       }

       return 0;
  }

int pop_basic_stack(BasicStack* s){
    if(s->size>0){
        int *ar;
        ar=s->ar;
        //We really doesn't remove any element from stack
        //It just decrease the length of stack
        --s->size;
        return *(ar+s->size);
    }
    return  0; 
}


void delete_basic_stack(BasicStack* s){
    //Freeing memory associated with array containing stack
    free(s->ar);
    //Freeing memory associated with BasicStack struct
    free(s);
}